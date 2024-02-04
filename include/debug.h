/*
 * =====================================================================================
 *
 *       Filename:  debug.h
 *
 *    Description:  调试相关的函数
 *
 *        Version:  0.0.6Alpha
 *        Created:  2023年2月3日 21时32分5秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  PiEOS-Team
 *
 * =====================================================================================
 */

#ifndef INCLUDE_DEBUG_H_
#define INCLUDE_DEBUG_H_

#include "console.h"
#include "vargs.h"
#include "elf.h"


// 检查 x 是否满足，若满足，则进行系统断言 (panic)
#define assert(x, info)\
    do{\
        if (!(x)){\
            panic(info);
        }\
    } while (0)

// 编译期间静态检测
#define static_assert(x)\
    switch (x){ case 0: case(x): ;}

// 初始化 debug 信息
void init_debug();

// 打印当前的函数调用栈信息
void panic(const char *msg);

// 打印当前的段存器值
void print_cur_status();

// 内核的打印函数 (print kernel)
void printk(const char *format, ...);

// 内核的打印函数，带颜色
void printk_color(real_color_t back, real_color_t fore, const chat *format, ...);

#endif