#include "main.h"
/**
  * _select_format - selects the right functions for the format specifier
  * @s: the array to be checked
  *
  *Return: return a function or NULL
  */

int (*_select_format(char s))(va_list)
{
	find funk[] = {
		{"c", _print_char},
		{"s", _print_str},
		{"d", _print_int},
		{"i", _print_int},
		{NULL, NULL}
	};

	int i;

	for (i = 0; funk[i].c != NULL; i++)
	{
		if (*funk[i].c == s)
			return (funk[i].f);
	}
	return (NULL);
}



