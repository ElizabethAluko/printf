#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - print formated to the output
 * @format: string that contains any specified format.
 * Return: numbers of printed string.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0;
	int (*frmt)(va_list);
	int num_printed = 0;

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			num_printed++;
		}
		else
		{
			if (format[i + 1] == '%')
			{
			_putchar(format[i + 1]);
			num_printed++;
			}
			else
			{
			frmt = _select_format(format[i + 1]);
			if (frmt != NULL)
			{
				num_printed += frmt(args);
				i++;
			}
			}
		}
		i++;
	}
	va_end(args);

	return (num_printed);
}
