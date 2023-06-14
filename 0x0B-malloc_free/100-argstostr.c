#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: a pointer to a new string
 */

char *argstostr(int ac, char **av)
{
	int i, j, counter, total_len;
	char *ptr;

	counter = 0;
	total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		total_len += strlen(av[i]);

	ptr = (char *)malloc(sizeof(char) * (total_len + ac));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < strlen(av[i]); j++)
		{
			ptr[counter] = av[i][j];
			counter++
		}

		ptr[counter] = '\n';
		counter++;
	}

	return (ptr);
}
