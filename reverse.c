#include "main.h"

/**
 * _rev - reverses string argument on %r invocation
 * @ap: list of variable arguments
 * Return:number of characters printed
 */
int _rev(va_list ap)
{
	int len, i, j;
	char *str;

	str = va_arg(ap, char *);
	len = 0;
	while (str[len])
	{
		len++;
	}
	j = (len - 1);
	i = 0;
	for ( ; j >= 0; j--)
	{
		i += _putchar(str[j]);
	}
	return (i);
}
