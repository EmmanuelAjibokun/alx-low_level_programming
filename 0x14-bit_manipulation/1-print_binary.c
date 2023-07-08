#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: integer to be converted
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int leftmost;
	int bin_tracker;

	leftmost = 1UL << (sizeof(unsigned long int) * 8 - 1);
	bin_tracker = 0;

	while (leftmost != 0)
	{
		if ((n & leftmost) != 0)
		{
			bin_tracker = 1;
			_putchar('1');
		}
		else if (leftmost)
			_putchar('0');

		leftmost >>= 1;
	}

	if (!bintracker)
		_putchar('0');
}
