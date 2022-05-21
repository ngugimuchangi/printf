#include "main.h"
/**
 * p_hex - converts unsigned integer to specified base
 * @i: number to convert
 * @base: the base to convert to
 * @l: number of characters printed
 * @c: number to add to convert to uppercase or lowercase
 * Return: l
 */
int p_hex(unsigned int i, unsigned int base, int c, int l)
{
	if (i / base)
		l = p_hex(i / base, base, c, ++l);
	if (i % base < 10)
		_putchar(i % base + '0');
	else
		_putchar(i % base + c);
	return (l);
}
/**
 * print_hex - print number in hexdecimal lowercase
 * @ap: number to convert and print
 * Return: number of characters printed
 */
int print_hex(va_list ap)
{
	unsigned int i;

	i = va_arg(ap, unsigned int);
	return (p_hex(i, 16, 87, 1));
}
/**
 * print_Hex - print number in hexdecimal uppercase
 * @ap: number to convert and print
 * Return: number of characters printed
 */
int print_Hex(va_list ap)
{
	unsigned int i;

	i = va_arg(ap, unsigned int);
	return (p_hex(i, 16, 55, 1));
}
