#include "main.h"
/**
 * p_int - Print an integer
 * @i: integer to print
 * Return: number of characters printed
 */
int print_i(va_list i)
{
	int a;

	a = va_arg(i, int);
	return (_putint(a));
}
