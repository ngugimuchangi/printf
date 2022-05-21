#include "main.h"
/**
 * p_conv - converts unsigned integer to specified base
 * @i: number to convert
 * @base: the base to convert to
 * @l: number of characters printed
 * Return: l
 */
int p_conv(unsigned int i, unsigned int base, int l)
{
	if (i / base)
		l = p_conv(i / base, base, ++l);
	_putchar(i % base + '0');
	return (l);
}
