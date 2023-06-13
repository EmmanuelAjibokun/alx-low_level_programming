#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * free_grid - frees a 2d array
 * @grid: input array
 * @height: array rows
 *
 * Return: empty grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[height]);
	}
	free(grid);
}
