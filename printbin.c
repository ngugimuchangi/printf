#include "main.h"
/**
 * p_binary - prints unsigned int as binary
 * @b: int to print
 * Return: number of binary characters printed
 */
int print_b(va_list ap)
{
	unsigned int i;
	long result = 0;
	int rem, nth = 1;

	i = va_arg(ap, unsigned int);
	while (i != 0)
	{
		rem = i % 2;
		i /= 2;
		result += rem * nth;
		nth *= 10;
	}
	return (_putint(result));
}
