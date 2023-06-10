#include "main.h"
#include <stdio.h>
#include <string.h>

/*
 * main - print program name
 * @agrc: argument count
 * @agrv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, str_len;

	str_len = strlen(argv[argc - 1]);

	for (i = 0; i < str_len; i++)
		_putchar(argv[argc - 1][i]);
	_putchar('\n');

	return (0);
}
