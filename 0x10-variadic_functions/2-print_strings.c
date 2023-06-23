#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_strings - a function that print numbers
 * @separator: a string seperator
 * @n: number of args
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	if (separator == NULL || n == 0)
		exit(1);
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
			{
				printf("%s\n", va_arg(list, char*));
				break;
			}
			if (va_arg(list, int*) == NULL)
				printf("(nil)");

			printf("%s%s", va_arg(list, char*), separator);
		}
	}

	va_end(list);
}
