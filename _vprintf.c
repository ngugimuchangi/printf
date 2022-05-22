#include <stdio.h>
#include "main.h"
/**
 * _vprintf - check for string format
 * @op: struct of functions to select
 * @format: format string;
 * @aps: list of arguments
 * Description: the functions checks for format specifiers
 * flags, length mdofiers, width and precision and calls 
 * the right functions.
 * Return: Numbers of characters printed
 */
int _vprintf(spec_t op[], const char *format, va_list aps)
{
	int counter = 0;
	spec_t func[1];

	for (; *format != '\0'; format++)
	{
		if (*format != '%')
		{
			counter += _putchar(*format);
			continue;
		}
		format++;
		func[0] = selfunc(op, *format);
		if (func[0].sp != NULL)
			counter += func[0].f(aps);
		if (func[0].sp == NULL)
		{
			if (*format == '+' || *format == ' ' || *format == '#')
			{
				++format;
				func[0] = selfunc(op, *format);
				counter += flags(*(format - 1), func);
				counter += func[0].f(aps);
			}
		}
		if (func[0].sp == NULL)
		{
			if (*format == '%')
				counter += _putchar (*format);
			if (*format != '\0' && *format != '%')
				counter += _putchar (*(--format));
			if (*format == '\0')
			{
				counter = -1;
				break;
			}
		}

	}
	return (counter);
}
