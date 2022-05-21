#include "main.h"
/**
 * print_i - Print an integer
 * @ap: integer to print
 * Return: number of characters printed
 */
int print_i(va_list ap)
{
	int i, j = 0;

	i = va_arg(ap, int);
	if (i < 0)
	{
		j += _putchar('_');
		i *= -1;
	}
	j += p_conv(i, 10, 1);
	return (j);
}
