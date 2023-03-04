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
	unsigned int uns_int, divisor, counter;

	if (n < 0)
	{
		_putchar('-');
		uns_int = n * -1;
	}
	else
	{
		uns_int = n;
	}

	divisor = uns_int;
	counter = 1;

	while (divisor > 9)
	{
		divisor /= 10;
		counter *= 10;
	}

	while (counter >= 1)
	{
		_putchar((uns_int / counter) % 10 + '0');

		counter /= 10;
	}
}
