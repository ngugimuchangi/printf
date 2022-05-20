#include "main.h"

/**
 * print_perc - prints "%" symbol
 * @ap: va_list
 * Return: 1 (size printed)
 */
int print_perc(va_list ap)
{
	char perc;

	perc = va_arg(ap, int);
	return (_putchar(perc));
}
