#include "main.h"
/**
 * p_int - Print an integer
 * @i: integer to print
 * Return: number of characters printed
 */
int print_i(va_list ap)
{
	int a;

	a = va_arg(ap, int);
	return (_putint(a));
}
