#include "main.h"
/**
 * print_b2 - recursively converts number into binary
 * @n: number to convert to base 2
 * @counter: number of characters printed
 * Return: number of printed characters
 */
int print_b2(unsigned int n, int counter)
{
	if (n / 2)
		counter = print_b2(n / 2, counter + 1);
	_putchar(n % 2 + '0');
	return (counter);
}
/**
 * print_b - prints unsigned int as binary
 * @ap: int to print
 * Return: number of binary characters printed
 */
int print_b(va_list ap)
{
	unsigned int i;
	int counter = 0;

	i = va_arg(ap, unsigned int);
	counter = print_b2(i, counter) + 1;
	return (counter);
}
