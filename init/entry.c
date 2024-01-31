/*
 * =====================================================================================
 *
 *       Filename:  entry.c
 *
 *    Description:  PiEOS内核的入口函数
 *
 *        Version:  0.0.1 Alaph
 *        Created:  2023年12月03日 09时15分24秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  PiEOS-Team
 *
 * =====================================================================================
 */


#include "console.h"

int kern_entry(){
	console_clear();
	console_write_color("Hello, PiEOS!\n", rc_black, rc_green);
	console_write("Now is");
	get_data_time();
	console_write("(UTC+8)");
	return 0;
}
