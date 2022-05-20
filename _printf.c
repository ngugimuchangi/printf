#include "main.h"
#include <stdio.h>

/**
 * _printf - function that produces output according to format
 * @format: contains conversion specifiers like "c","s","%"
 * Return: Numbers of characters printed
 */
int _printf(const char *format, ...)
{
	int counter, j, k;
	va_list aps;

	spec_t specs[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_perc},
		{NULL, NULL}
	};
	counter = 0;
	va_start(aps, format);
	for (j = 0; format && format[j] != '\0'; j++)
	{
		if (format[j] != '%')
		{
			counter += _putchar(format[j]);
			continue;
		}
		j++;
		for (k = 0; specs[k].sp != NULL; k++)
		{
			if (format[j] == *(specs[k].sp))
			{
				counter += specs[k].f(aps);
				break;
			}
		}
	}
	va_end(aps);
	return (counter);
}
