#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars.
 * @size: size of allocated memory
 * @c: input character
 *
 * Return: NULL
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);

	unsigned int i;
	char *ptr;

	ptr = malloc((sizeof(c) * size) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= size; i++)
		ptr[i] = c;
	return (ptr);
}
