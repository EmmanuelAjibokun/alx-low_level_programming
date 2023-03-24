#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - function that searchs for an integer
 * @array: array of data
 * @size: size of array
 * @cmp: input function
 * Return: i
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if ((*cmp)(array[i]) != 0)
			return (i);
	}
	return(i);
}
