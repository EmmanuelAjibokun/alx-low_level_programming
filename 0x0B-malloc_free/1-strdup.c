#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a copy of the string given as a parameter
 * @str: string input
 *
 * Return: ptr
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, str_len;
	i = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
	}

	str_len = i;
	i = 0;

	ptr = malloc(sizeof(char) * str_len);

	if (ptr == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
