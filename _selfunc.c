#include <stdio.h>
#include "main.h"
/**
 * selfunc - selects function to used based on specifier
 * @op: struct to check for specifier
 * @sp: format specifier
 * Return: The name of the function.
 */
spec_t selfunc(spec_t op[], char sp)
{
	int i = 0;

	for (i = 0; op[i].sp != NULL; i++)
	{
		if (sp == *(op[i].sp))
			break;
	}
	return (op[i]);
}
