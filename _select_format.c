#include "main.h"
/**
  * _select_format - selects the right functions for the format specifier
  * @c: the array to be checked
  *
  *Return: return a function or NULL
  */

int(*_select_format(char c))(args_list)
{
	int e = 0;
	find funk[] = {
		{'c', print_char},
		{'s', print_string},
		{'i', print_integer},
		{'d', print_integer},
		{NULL, NULL}
	};
	for (; funk[e].c != NULL; e++)
	{
		if (*funk[e].c == s)
			return (funk[e].f);
	}
	return (NULL);
}



