#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * get_bit - returns bit of an index
 * @n: integer to be converted
 * @index: position to return
 *
 * Return: integer value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int leftmost;
	int bin_tracker;

	bin_tracker = 0;

	if (index < 0 || index >= sizeof(int) * 8)
		return (-1);

	leftmost = 1 << index;
	bin_tracker = (n & leftmost) >> index;

	return (bin_tracker);
}
