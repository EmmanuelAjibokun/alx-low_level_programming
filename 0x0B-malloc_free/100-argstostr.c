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
	int i;
	char **ptr;

	if (ac == 0 || av == NULL)
		return (NULL);

	ptr = (char **)malloc(sizeof(char *) * ac);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		str_len = strlen(av[i])
		ptr[i] = (char *)malloc(sizeof(char) * str_len);
		if (ptr[i] == NULL)
			return (NULL);
		strcpy(ptr[i], av[i]);
	}

	return (ptr);
}
