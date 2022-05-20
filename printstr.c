#include "main.h"
#include <stdio.h>
/**
 * print_s - Invoked by specifier "s" to print string
 * @ap: va_list type
 * Return: length of string
 */
int print_s(va_list ap)
{
	int i;
	char *str;

	str = va_arg(ap, char *);
	i = 0;
	while (str[i] != '\0' && str != NULL)
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
