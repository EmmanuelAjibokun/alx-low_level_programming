#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 * @a: input value
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; *a[i] != '\0'; i++)
	{
		for (j = 0; *a[j] != '\0'; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
