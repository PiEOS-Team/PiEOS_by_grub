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
#include "debug.h"
#include "gdt.h"
#include "idt.h"
#include "timer.h"

int kern_entry(){
    init_debug();
    init_gdt();
    init_idt();
    
	console_clear();
	
	printk_color(rc_black, rc_green, "This is printk!\n");
	
	console_write_color("The quick brown fox jumps over a lazy dog.\n", rc_black, rc_green);
	
	console_write_color("!\"#$&\'()*+,-./:;<=>?@[\\]^_`{|}~\n", rc_black, rc_green);
	
	init_timer(200);
	
	// 开启中断
	asm volatile ("sti");
	
	return 0;
}
