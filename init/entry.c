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


#include "types.h"

int kern_entry(){
    uint8_t *input = (uint8_t *)0xB8000;
    uint8_t color = (0 << 4) | (15 & 0x0F);

	*input++ = 'H'; *input++ = color;
	*input++ = 'e'; *input++ = color;
	*input++ = 'l'; *input++ = color;
	*input++ = 'l'; *input++ = color;
	*input++ = 'o'; *input++ = color;
	*input++ = ','; *input++ = color;
	*input++ = ' '; *input++ = color;
	*input++ = 'P'; *input++ = color;
	*input++ = 'i'; *input++ = color;
	*input++ = 'E'; *input++ = color;
	*input++ = 'O'; *input++ = color;
	*input++ = 'S'; *input++ = color;
	*input++ = '-'; *input++ = color;
	*input++ = 'T'; *input++ = color;
	*input++ = 'e'; *input++ = color;
	*input++ = 'a'; *input++ = color;
	*input++ = 'm'; *input++ = color;
	*input++ = '!'; *input++ = color;

	return 0;
}