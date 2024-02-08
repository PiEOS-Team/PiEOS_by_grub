/*
 * =====================================================================================
 *
 *       Filename:  timer.c
 *
 *    Description:  定义 PIT(周期中断定时器) 相关函数
 *
 *        Version:  0.1
 *        Created:  2024年2月6日 20时11分10秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  PiEOS-Team
 *
 * =====================================================================================
 */

#ifndef INCLUDE_TIMER_H_
#define INCLUDE_TIMER_H_

#include "types.h"

void init_timer(uint32_t frequency);

#endif
