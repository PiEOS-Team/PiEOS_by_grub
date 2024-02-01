#include "cmos.h"
#include "common.h"
#include "console.h"

static uint8_t read_cmos(uint8_t p){
    uint8_t data;
    outb(CMOS_INDEX, p);
    data = inb(CMOS_DATA);
    outb(CMOS_INDEX, 0x80);
    return data;
}

struct DateTime{
    uint32_t year;
    uint32_t month;
    uint32_t day;
    uint32_t hour;
    uint32_t minute;
    uint32_t second;
};

static struct DateTime get_current_datetime(){
    struct DateTime dt;

    dt.second = bcd2hex(read_cmos(CMOS_CUR_SEC));
    dt.minute = bcd2hex(read_cmos(CMOS_CUR_MIN));
    dt.hour = bcd2hex(read_cmos(CMOS_CUR_HOUR));

    dt.day = bcd2hex(read_cmos(CMOS_MON_DAY));
    dt.month = bcd2hex(read_cmos(CMOS_CUR_MON));
    dt.year = bcd2hex(read_cmos(CMOS_CUR_YEAR)) + (bcd2hex(read_cmos(CMOS_CUR_CEN)) * 100) + 1980;

    return dt;
}

static int is_leap_year(int year){
    if (year % 4 != 0)
        return 0;
    if (year % 400 == 0)
        return 1;
    return year % 100 != 0;
}

// UTC 转 UTC + 8
void adjust_to_utc8(struct DateTime* dt) {
    dt->hour += 8;
    if (dt->hour >= 24) {
        dt->hour -= 24;
        dt->day++;
    }

    // 考虑月份变化
    const int days_per_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (is_leap_year(dt->year)){
        days_per_month[2]++;
    }
    
    while (dt->day > days_per_month[dt->month]){
        dt->day -= days_per_month[dt->month];
        dt->month++;
        if (dt->month > 12){
            dt->month = 1;
            dt->year++;
        }
    }
}

void get_date_time(){
    struct DateTime dt = get_current_datetime();

    #ifdef NEED_UTC_8
        adjust_to_utc8(&dt);
    #endif

    console_write_dec(dt.year, rc_black, rc_white);
    console_write("/");
    console_write_dec(dt.month, rc_black, rc_white);
    console_write("/");
    console_write_dec(dt.day, rc_black, rc_white);
    console_write(" ");
    console_write_dec(dt.hour, rc_black, rc_white);
    console_write(":");
    console_write_dec(dt.minute, rc_black, rc_white);
    console_write(":");
    console_write_dec(dt.second, rc_black, rc_white);
    console_write("\n");
}