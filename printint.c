#include "main.h"
/**
 * print_i - Print an integer
 * @ap: integer to print
 * Return: number of characters printed
 */
int print_i(va_list ap)
{
	int a;

	a = va_arg(ap, int);
	return (_putint(a));
}
