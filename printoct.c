#include "main.h"
/**
 * print_oct - prints integer as octal
 * @ap: int to convert to octal
 * Return: number of binary characters printed
 */
int print_oct(va_list ap)

{
	unsigned int i;
	unsigned int result = 0, rem, nth = 1;

	i = va_arg(ap, unsigned int);
	while (i != 0)
	{
		rem = i % 8;
		i /= 8;
		result += rem * nth;
		nth *= 10;
	}
	return (_putint(result));
}
