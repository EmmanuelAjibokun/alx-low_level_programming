#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - allocates memory horizontally and vertically
 * @height: row input
 * @width: column input
 *
 * Return: NULL
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(height * sizeof(int *));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *)malloc(width * sizeof(int));

		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(ptr[i]);
			free(ptr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}

	return (ptr);
}
