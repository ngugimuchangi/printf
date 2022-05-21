#include "main.h"
/**
 * print_b - prints unsigned int as binary
 * @ap: int to print
 * Return: number of binary characters printed
 */
int print_b(va_list ap)
{
	unsigned int i;

	i = va_arg(ap, unsigned int);
	return (p_conv(i, 2, 1));
}
