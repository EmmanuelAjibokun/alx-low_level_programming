#include "main.h"
#include <stdio.h>

/**
 * main - prints first command from command line
 * @argc: argument count
 * @argv: argument string array
 *
 * Return: void
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i])
	}
	return (0);
}
