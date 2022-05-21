#include "main.h"

/**
 * conv_rot13 - encodes string to rot13
 * @ap: list of variable arguments
 * Return: number of characters printed
 */
int conv_rot13(va_list ap)
{
	int i, len;
	char *str;

	str = va_arg(ap, char *);
	i = 0;
	len = 0;
	if (!str)
	{
		str = "(null)"
	}
	while (str[i])
	{
		if (str[i] >= 65 && str[i] < 78)
		{
			len += _putchar(str[i] + 13);
		}
		else if (str[i] >= 78 && str[i] <= 90)
		{
			len += _putchar(str[i] - 13);
		}
		else
		{
		len += _putchar(str[i]);
		}
		i++;
	}
	return (len);
}
