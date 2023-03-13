#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: argument string array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	result = atoi(argv[2]) * atoi(argv[1]);
	printf("%d\n", result);
	return (0);
}
