#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
 * main - add all arguments, except program name
 * isNumber - check if string is number
 * @argc: argument count
 * @argv: argument vector
 * @str: input string
 *
 * Return: 0 || 1
 */

bool isNumber(const char *str)
{
	char *endptr;

	strtol(str, &endptr, 10);
	return (*endptr == '\0');
}

int main(int argc, char *argv[])
{
	int result, check_non_num, i;

	result = 0;
	check_non_num = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		if (isNumber(argv[i]))
			result += atoi(argv[i]);
		else
			check_non_num += 1;
	}

	if (check_non_num == 0)
		printf("%d\n", result);
	else
		printf("Error\n");

	return (1);
}
