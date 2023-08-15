#ifndef _STRING_H_
#define _STRING_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "types.h"



void *my_memchr(const void *str, uint32 c, uint32 n);
uint32 My_memcmp(const void *str1, const void *str2,  uint32 Length);
void *My_memcpy(void *dest, const void * src,  uint32 Length);
void *My_memmove(void *str1, const void *str2,  uint32 Length);
void *My_memset(void *str,  uint8 c,  uint32 Length);
uint8 *My_strcat(uint8 *dest, const uint8 *src);
uint8 *My_strchr(const uint8 *str, uint32 c);
uint32 My_strcmp(const uint8 *str1, const uint8 *str2);
uint8 *My_strcpy(uint8 *dest, const uint8 *src);
uint32 My_strcspn(const uint8 *str1, const uint8 *str2);
uint8 *My_strncat(uint8 *dest, const uint8 *src,  uint32 Length);
uint32 My_strncmp(const uint8 *str1, const uint8 *str2,  uint32 Length);
uint8 *My_strncpy(uint8 *str1, const uint8 *str2,  uint32 Length);

#endif