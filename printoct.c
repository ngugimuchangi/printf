#include "main.h"
/**
 * print_oct - prints integer as octal
 * @ap: int to convert to octal
 * Return: number of binary characters printed
 */
int print_oct(va_list ap)

{
	unsigned int i;

	i = va_arg(ap, unsigned int);
	return (p_conv(i, 8, 1));
}

