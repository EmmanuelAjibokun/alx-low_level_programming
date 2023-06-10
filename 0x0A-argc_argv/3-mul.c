#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * main - multiply two arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 1
 */

int main(int argc, char *argv[])
{
	if (argc > 1)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
		printf("Error\n");

	return (1);
}
