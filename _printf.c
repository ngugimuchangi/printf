#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * _printf - function that produces output according to format
 * @formart: contains conversion specifiers like "c","s","%"
 * Return: Numbers of characters printed
 */
int _printf(const char *format, ...);
{
	int counter, j, k;
	va_list aps;
	char tr;

	spec_t specs[] = {
		{"c", "print_c"},
		{"s", "print_s"}
	};
	counter = 0;
	tr = "%";
	va_start(ap, format);
	for (j = 0; format[j] != '\0';)
	{
		if (strcmp(format[j], tr) == 0)
		{
			j++;
			for (k = 0; k < 2; k++)
			{
				if (strcmp((format + j), specs[k].sp) == 0)
				{
					counter += specs[k].f(aps);
					break;
				}
			}
			continue;
		}
		_putchar(format[j]);
		counter++;
		j++;
	}
	return (counter);

}
