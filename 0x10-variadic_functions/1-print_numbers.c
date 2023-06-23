#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that print numbers
 * @separator: a string seperator
 * @n: number of args
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	if (separator == NULL || n == 0)
		printf('\n');
	else
	{
		for (i = 0; i < n; i++)
		{
			if (i == n - 1)
			{
				printf("%d\n", va_arg(list, int));
				break;
			}
			printf("%d, ", va_arg(list, int));
		}
	}
}
