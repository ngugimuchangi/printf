#include "main.h"
/**
 * print_ui - print unsigned int
 * @ap: usigned int to print
 * Return: number of characters printed
 */
int print_ui(va_list ap)
{
	int i;

	i = va_arg(ap, int);
	if (i < 0)
		i *= -1;
	return (_putint(i));
}
