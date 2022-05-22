#include "main.h"

/**
 * conv_rot13 - Offsets alphabetical letters by 13 places
 * @ap: list of variable arguments
 * Return: number of characters printed
 */
int conv_rot13(va_list ap)
{
	int i = 0, len = 0;
	char *str;

	str = va_arg(ap, char *);
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			if (str[i] < 78)
			{
				len += _putchar(str[i] + 13);
			}
			else
			{
				len += _putchar(str[i] - 13);
			}
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
			if (str[i] < 110)
			{
				len += _putchar(str[i] + 13);
			}
			else
			{
				len += _putchar(str[i] - 13);
			}
		}
		else
		{
		len += _putchar(str[i]);
		}
		i++;
	}
	return (len);
}
