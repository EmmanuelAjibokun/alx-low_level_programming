#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * main - prints change
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1
 */

int main(int argc, char *argv[])
{
	int change, input, i;
	int cents[5] = {25, 10, 5, 2, 1};

	change = 0;
	input = atoi(argv[argc - 1]);

	if (argc - 1 == 1)
	{
		if (input < 1)
		{
			printf("0\n");
			return (1);
		}

		for (i = 0; i < 5; i++)
		{
			if (input == 0)
				break;
			if (input >= cents[i])
			{
				change = floor(input / cents[i]) + change;
				input = input - (floor(input / cents[i]) * cents[i]);
			}
		}
		printf("%d\n", change);
	}
	else
		printf("Error\n");

	return (1);
}
