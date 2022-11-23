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
	int i = 0, count = 0, (*frmt)(va_list);

	va_start(args, format);

	if (!format || (format[0] == '%' && !format[1]) || format[1] == ' ')
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
		}
		else
		{
			if (format[i + 1] == '%')
			{
			_putchar(format[i + 1]);
			count++;
			}
			else
			{
			frmt = _select_format(format[i + 1]);
			if (frmt != NULL)
			{
				count += frmt(args);
				i++;
			}
			}
		}
		i++;
	}
	_putchar(-1);
	va_end(args);

	return (count);
}
