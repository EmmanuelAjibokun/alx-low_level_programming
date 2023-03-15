#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2d array of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: ptr
 */

int **alloc_grid(int width, int height)
{
	int **ptr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	
	ptr = (int **)malloc(sizeof(int) * height);
	if (ptr == NULL)
		return (NULL);
	
	for (i = 0; i < height; i++)
	{
		ptr[i] = 0;
		ptr[i] = (int *)malloc(sizeof(int) * width);

		if (ptr[i] == 0)
		{
			while (i >= 0)
			{
				free(ptr[i]);
				i--;
			}
			free(ptr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
