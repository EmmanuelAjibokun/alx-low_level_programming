#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - a function that executes a function given as
 * a parameter on each element of an array.
 * @array: array of items
 * @size: array length
 * @action: function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		exit(1);

	for (i = 0; i < size; i++)
		action(array[i]);
}

