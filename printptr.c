#include "main.h"
/**
 * p_addr - converts address to specified base
 * @i: memory address to convert
 * @base: the base to convert to
 * @l: number of characters printed
 * @c: number to add to convert to uppercase or lowercase
 * Return: l
 */
int p_addr(unsigned long i, unsigned int base, int c, int l)
{
	if (i / base)
		l = p_addr(i / base, base, c, ++l);
	if (i % base < 10)
		_putchar(i % base + '0');
	else
		_putchar(i % base + c);
	return (l);
}
/**
 * print_ptr - prints a void pointer in hexadecimal
 * @ap: address to print
 * Description: prints the address held by the pointer
 * Return: number of characters printed on success
 * and -1 on failure
 */
int print_ptr(va_list ap)
{
	int counter = 0;
	unsigned long addr;

	addr = va_arg(ap, unsigned long);
	if (addr == 0)
	{
		counter += _putchar('(');
		counter += _putchar('n');
		counter += _putchar('i');
		counter += _putchar('l');
		counter += _putchar(')');
	}
	else
	{
	counter += _putchar('0');
	counter += _putchar('x');
	counter += p_addr(addr, 16, 87, 1);
	}
	return (counter);
}
