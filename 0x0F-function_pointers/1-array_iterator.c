#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iteration - a function that executes a function given as a parameter on each element of an array.
 * @array: array of items
 * @size: array length
 * @action: function pointer
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
