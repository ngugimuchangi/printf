#include "main.h"

/**
 * print_c - Invoked by "c" specifier to print character
 * @ap: va_list type
 * Return: length of character printed (1);
 */
int print_c(va_list ap)
{
	char ch;

	ch = va_arg(ap, int);
	return (_putchar(ch));
}
