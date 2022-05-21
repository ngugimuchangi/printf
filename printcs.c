#include "main.h"

/**
 * print_cs - print string while non printable
 * printed this way: \x,
 * followed by the ASCII code value in hexadecimal 
 * @ap: list of variable arguments
 * Return: size of string printed
 */
int print_cs(va_list ap)
{
	int len = 0, i = 0;
	char *str;

	str = va_arg(ap, char *);
	while (!str[i])
	{
		if (str[i] > 32 && str[i] < 127)
		{
			len += _putchar(str[i]);
		}
		else
		{
		len += _putchar(47);
		len += _putchar('x');
		len += p_hex(str[i], 16, 55, 1);
		}
		i++;
	}
	return (len);
}
