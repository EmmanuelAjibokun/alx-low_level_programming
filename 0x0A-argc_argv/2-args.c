#include "main.h"
#include <stdio.h>

/*
 * main - prints all argument in command
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s", argv[i]);
		_putchar('\n');
	}

	return (0);
}
