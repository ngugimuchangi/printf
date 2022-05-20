#include "main.h"
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
	if (!str)
		str = "(null)";
	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
