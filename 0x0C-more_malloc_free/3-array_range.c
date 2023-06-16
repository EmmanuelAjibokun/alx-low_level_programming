#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - array created should contain all the values from  min to max
 * @min: minimum value
 * @max: maximum value
 *
 * Return: NULL
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr;

	if (min > max)
		return (NULL);

	diff = max - min;
	ptr = malloc(sizeof(int) * (diff + 1));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= diff; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
