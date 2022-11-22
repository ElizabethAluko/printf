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
		{'c', print_char},
		{'s', print_str},
		{'i', print_int},
		{'d', print_int},
		{NULL, NULL}
	};
	for (int e = 0; funk[e].c != NULL; e++)
	{
		if (*funk[e].c == s)
			return (funk[e].f);
	}
	return (NULL);
}



