#include "main.h"
/**
 * print_b - prints unsigned int as binary
 * @ap: int to print
 * Return: number of binary characters printed
 */
int print_b(va_list ap)
{
	int i;
	long result = 0;
	int rem, nth = 1;

	i = va_arg(ap, unsigned int);
	if (i < 0)
		i *= -1;
	while (i != 0)
	{
		rem = i % 2;
		i /= 2;
		result += rem * nth;
		nth *= 10;
	}
	return (_putint(result));
}
