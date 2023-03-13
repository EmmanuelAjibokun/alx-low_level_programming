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
	printf("%s\n", argv[argc - 1]);

	return (0);
}
