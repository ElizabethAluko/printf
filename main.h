#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

/**
 * struct funk - this structure contains format specifiers
 * @c: character that calls specifier fuunction
 * @f: specifier function
 */
typedef struct funk
{
	char *c;
	int (*f)(va_list);
} find;

int _putchar(char c);
int _printf(const char *format, ...);
int _print_char(va_list args);
int _print_str(va_list args);
int _print_int(va_list args);
int (*_select_format(char c))(va_list args);

#endif
