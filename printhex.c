#include "main.h"
/**
 * print_hex - print number in hexdecimal lowercase
 * @ap: number to convert and print
 * Return: number of characters printed
 */
int print_hex(va_list ap)
{
	unsigned int i;
	int j = 0, rem, counter;
	char s[100];

	i = va_arg(ap, unsigned int);
	while (i != 0)
	{
		rem = i % 16;
		i /= 16;
		if (rem < 10)
			s[j] = rem + '0';
		else
			s[j] = rem + 87;
		j++;
	}
	for (counter = 0, j--; j >= 0; j--)
		counter += _putchar(s[j]);
	return (counter);
}
/**
 * print_Hex - print number in hexdecimal uppercase
 * @ap: number to convert and print
 * Return: number of characters printed
 */
int print_Hex(va_list ap)
{
	unsigned int i;
	int j = 0, rem, counter;
	char a[100];

	i = va_arg(ap, unsigned int);
	while (i != 0)
	{
		rem = i % 16;
		i /= 16;
		if (rem < 10)
			a[j] = rem + '0';
		else
			a[j] = rem + 55;
		j++;
	}
	for (counter = 0, j--; j >= 0; j--)
		counter += _putchar(a[j]);
	return (counter);
}
