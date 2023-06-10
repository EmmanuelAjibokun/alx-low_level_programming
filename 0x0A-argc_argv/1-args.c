#include "main.h"
#include <stdio.h>

/*
 * main - prints number of arguments passed to command
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	_putchar('0' + argc - 1);
	_putchar('\n');
	(void)argv;
	return (0);
}
