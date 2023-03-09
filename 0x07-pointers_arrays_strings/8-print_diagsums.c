#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals.
 * @a: input value
 * @size: input value
 *
 * Result: void
 */

void print_diagsums(int *a, int size)
{
	int i, j, counter, left_result, right_result;

	counter = 0;
	left_result = 0;
	right_result = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			left_result += *(a + (i * size) + counter);
			counter++;
			break;
		}
	}

	counter = size - 1;

	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j >= 0; j--)
		{
			right_result += *(a + (i * size) + counter);
			counter--;
			break;
		}
	}

	printf("%d,%d\n", left_result, right_result);
}
