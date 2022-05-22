#include "main.h"
/**
 * flags - check for the presence of flag characters
 * @c: flag characters
 * @func: functions for specifiers associated with the flags
 * Return: number of characters printed
 */
int flags(char c, spec_t func[])
{
	int counter = 0;

	if (c == '+' && (func[0].f) == print_i)
		counter += _putchar('+');
	if (c == ' ' && (func[0].f) == print_i)
		counter += _putchar(' ');
	if (c == '#' && (func[0].f) == print_oct)
		counter += _putchar('0');
	if (c == '#' &&	func[0].f == print_hex)
		counter += _putchar('0') + _putchar ('x');
	if (c == '#' && func[0].f == print_Hex)
		counter += _putchar('0') + _putchar ('X');
	return (counter);
}
