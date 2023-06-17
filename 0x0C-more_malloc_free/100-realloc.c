#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _realloc - returns a ptr to a reallocated memory
 * @ptr: a pointer variable to a memory address
 * @old_size: size of ptr in bytes
 * @new_size: new size in bytes
 *
 * Return: NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *hold_str = malloc(sizeof(char) * old_size);

	if (hold_str == NULL)
		return (NULL);

	if (new_size == old_size)
		return (ptr);

	strcpy(hold_str, ptr);

	if (ptr == NULL)
	{
		free(hold_str);
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(hold_str);
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
	{
		free(ptr);
		ptr = malloc(new_size);

		if (ptr == NULL)
			return (NULL);
		strcpy(ptr, hold_str);
		free(hold_str);
		return (ptr);
	}
	return (NULL);
}
