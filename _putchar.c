#include "main.h"
#include <unistd>

/**
 * _putchar - print character a.
 * @c: character to print.
 * Return: the character to the output.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
