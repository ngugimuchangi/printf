#include "main.h"
/**
 * print_ui - print unsigned int
 * @ap: usigned int to print
 * Return: number of characters printed
 */
int print_ui(va_list ap)
{
	unsigned int i;

	i = va_arg(ap, unsigned int);
	return (p_conv(i, 10, 1));
}
