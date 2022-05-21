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
	if (!str)
		str = "(null)";
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			len += _putchar(92);
			len += _putchar('x');
			if (str[i] < 16)
				len += _putchar('0');
			len += p_hex(str[i], 16, 55, 1);
		}
		else
		{
			len += _putchar(str[i]);
		}
		i++;
	}
	return (len);
}
