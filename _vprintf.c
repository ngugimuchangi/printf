#include <stdio.h>
#include "main.h"
/**
 * _vprintf - selects function to use in print out
 * @op: struct of functions to select
 * @format: format string;
 * @aps: list of arguments
 * Return: Numbers of characters printed
 */
int _vprintf(spec_t op[], const char *format, va_list aps)
{
	int counter = 0, i;

	for (; *format && format; format++)
	{
		if (*format != '%')
		{
			counter += _putchar(*format);
			continue;
		}
		format++;
		for (i = 0; op[i].sp != NULL; i++)
		{
			if (*format == *(op[i].sp))
			{
				counter += op[i].f(aps);
				break;
			}
		}
		if (op[i].sp == NULL)
		{
			if (*format == '%')
				counter += _putchar (*format);
			if (*format == ' ' || *format == '\0')
			{
				counter = -1;
				break;
			}

		}
	}
	return (counter);
}
