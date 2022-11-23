#include "main.h"
/**
 * _print_char - Print char data type
 * @args: Store the a list of characters
 * Return: return number of characters printed
 */
int _print_char(va_list args)
{
	int c = va_arg(args, int);

	return (_putchar(c));
}

/**
  * _print_str - print string
  * @args: Store the list of characters
  * Return: return number of parameters printed
  */
int _print_str(va_list args)
{
	int e;
	int count = 0;
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	for (e = 0; str[e]; e++)
		count += _putchar(str[e]);
	return (count);
}

/**
 * _print_int - Print an integer
  * @args: Store the integers
  * Return: Counter print numbers
  */
int _print_int(va_list args)
{
	unsigned int num_Abs, div_Num, mul_Num, count;
			int num;

			count = 0;

			num = va_arg(args, int);

			if (num < 0)
			{
				num_Abs = (num * -1);
				count += _putchar(45);
			}
			else
				num_Abs = num;

			div_Num = num_Abs;
			mul_Num = 1;

			while (div_Num > 9)
			{
				div_Num /= 10;
				mul_Num *= 10;
			}

			while (mul_Num >= 1)
			{
				count += _putchar(((num_Abs / mul_Num) % 10) + '0');
				mul_Num /= 10;
			}
			return (count);
}

