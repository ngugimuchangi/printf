#include "main.h"

/**
 * _printf - function that produces output according to format
 * @format: contains conversion specifiers like "c","s","%"
 * Return: Numbers of characters printed
 */
int _printf(const char *format, ...)
{
	int counter = 0, i, j;
	va_list aps;

	spec_t specs[] = {
		{"c", print_c},
		{"s", print_s},
		{NULL, NULL}
	};
	va_start(aps, format);
	for (j = 0; format &&  format[j] != '\0'; j++)
	{
	if (format[j] != '%')
	{
		counter += _putchar(format[j]);
		continue;
	}
	j++;

	for (i = 0; specs[i].sp != NULL; i++)
	{
		if (format[j] == *(specs[i].sp))
		{
			counter += specs[i].f(ap);
			break;
		}
	}
	if (op[i].sp == NULL)
	{
		if (format[j] == '%')
			counter += _putchar (format[j]);
	}
	}
	va_end(aps);
	return (counter);
}
