#include "main.h"
/**
  * _select_format - selects the right functions for the format specifier
  * @c: the array to be checked
  *
  *Return: return a function or NULL
  */

int(*_select_format(char c))(args_list)
{
	int e;
	find funk[] = {
		{'c', _print_char},
		{'s', _print_str},
		{'i', _print_int},
		{'d', _print_int},
		{NULL, NULL}
	};
	for (int e = 0; funk[e].c != NULL; e++)
	{
		if (*funk[e].c == s)
			return (funk[e].f);
	}
	return (NULL);
}



