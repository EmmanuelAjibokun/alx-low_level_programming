#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index -  a function that searches for an integer.
 * @array: array of numbers
 * @size: array length
 * @cmp: pointer to a function
 *
 * Return: integer value
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
