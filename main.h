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
int _print_char(char c);
int _print_str(char *s);
int _print_int(int n);
int (*_select_format(char c)(arg_list);

#endif
