#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - returns a pointer to an allocated memory
 * @b: number of memory to be allocated
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(sizeof(int) * b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
