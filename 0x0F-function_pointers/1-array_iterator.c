#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that execute another function as parameter
 * @array: array of integers
 * @size: array size
 * @action: function to be called back
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
			(*action)(array[i]);
	}
}
