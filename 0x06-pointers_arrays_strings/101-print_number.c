#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_number - a function that prints an integer
 * @n: input value
 *
 * Return: void
 */

void print_number(int n)
{
	int i, length;
	char int_str[10];

	length = snprintf(NULL, 0, "%d", n);

	sprintf(int_str, "%d", n);
	for (i = 0; i < length; i++)
	{
		_putchar(int_str[i]);
	}

}
