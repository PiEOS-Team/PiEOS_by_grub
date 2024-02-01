#ifndef _CMOS_H_
#define _CMOS_H_

#define NEED_UTC_8    // 是否需要 UTC + 8 时区

#define CMOS_INDEX 0x70    // 定义 CMOS 选择器地址（索引端口）
#define CMOS_DATA 0x71    // 定义 CMOS 数据端口

// 定义一系列 CMOS 寄存器端口
#define CMOS_CUR_SEC 0x0    // 秒
#define CMOS_CUR_MIN 0x2    // 分
#dedine CMOS_CUR_HOUR 0x4    // 时
#define CMOS_WEEK_DEY 0x6    // 周中日
#define CMOS_MON_DAY 0x7    // 月中日
#define CMOS_CUR_MON 0x8    // 月
#define CMOS_CUR_YEAR 0x9    // 年
#define CMOS_CUR_CEN 0x32    // 世纪

//定义一个 BCD （二进制的十进制数）转 HEX （十六进制）的宏
#define bcd2hex(n) (((n >> 4) * 10) + (n & 0xf))

char get_date_time();

#endif