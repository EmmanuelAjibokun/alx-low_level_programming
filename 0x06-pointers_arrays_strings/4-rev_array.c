#include "main.h"
#include <stdio.h>

/**
 * reverse_array - print reverse of array
 * @a: input value
 * @n: input value
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, index;

	i = n - 1;
	index = n - 1;
	while (index >= 0)
	{
		if (index)
			index = 0;
		else if (i >= 0)
			printf(", ");

		printf("%d", a[i]);

		i--;
	}
	printf("\n");
}
