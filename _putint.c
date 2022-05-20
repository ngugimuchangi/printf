#include "main.h"

/**
 * _putint -writes the integer i as a char to stdout
 * @n: The int to print
 *
 * Return: number of characters printed.
 */
int _putint(int n)
{
	int copy, nth, size = 1, ones = n % 10, k = 0;

	n /= 10;
	copy = n;
	if (ones < 0)
	{
		ones *= -1, copy *= -1, n *= -1;
		k += _putchar('-');
	}
	if (copy > 0)
	{
		while (copy / 10 != 0)
		{
			copy /= 10, size *= 10;
		}
		while (size > 0)
		{
			nth = n / size;
			k += _putchar('0' + nth);
			n -= nth * size;
			size /= 10;
		}
	}
	k += _putchar('0' + ones);
	return (k);
}
