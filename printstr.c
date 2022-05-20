#include "main.h"
/**
 * print_s - Invoked by specifier "s" to print string
 * @ap: va_list type
 * Return: length of string
 */
int print_s(va_list ap)
{
	int i, j;
	char *str;

	str = va_arg(ap, char *);
	i = 0;
	j = 0;
	while (str[i] != '\0' && str)
	{
		j += _putchar(str[i]);
		i++;
	}
	return (j);
}
