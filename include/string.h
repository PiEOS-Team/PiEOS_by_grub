/*
 * =====================================================================================
 *
 *       Filename:  string.h
 *
 *    Description:  字符串处理函数
 *
 *        Version:  0.1
 *        Created:  2024年2月3日 21时18分55秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  PiEOS-Team
 *
 * =====================================================================================
 */

#ifndef INCLUDE_STRING_H_
#define INCLUDE_STRING_H_

#include "types.h"

static inline void memcpy(uint8_t *dest, const uint8_t *src, uint32_t len){
	for (; len != 0; len--){
		*dest++ = *src++;
	}
}

static inline void memset(void *dest, uint8_t val, uint32_t len){
	uint8_t *dst = (uint8_t *)dest;

	for ( ; len != 0; len--){
		*dst++ = val;
	}
}

static inline void bzero(void *dest, uint32_t len){
	memset(dest, 0, len);
}

static inline int strcmp(const char *str1, const char *str2){
    while (*str1 && *str2 && *str1 == *str2){
        str1++;
        str2++;
    }

    return *str1 - *str2;
}

static inline char *strcpy(char *dest, const char *src){
	char *tmp = dest;

	while (*src){
	    *dest++ = *src++;
	}

	*dest = '\0';

	return tmp;
}

static inline char *strcat(char *dest, const char *src){
	char *cp = dest;

	while (*cp){
	    cp++;
	}

	while ((*cp++ = *src++))
	    ;

	return dest;
}

static inline int strlen(const char *src){
	const char *eos = src;

    while (*eos++)
	    ;

	return (eos - src - 1);
}

#endif

