#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum up all args
 * @n: number of args
 *
 * Return: integer
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;

	sum = 0;

	if (n == NULL)
		return (0);

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
