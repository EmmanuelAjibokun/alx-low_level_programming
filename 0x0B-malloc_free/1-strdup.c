#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a new string which is a duplicate
 * of the string str
 * @str: input of a string to be copied
 *
 * Return: NULL
 */

char *_strdup(char *str)
{
	int i, str_len;
	char *ptr;

	if (str == NULL)
		return (NULL);

	str_len = strlen(str);
	ptr = malloc(sizeof(char) * str_len);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < str_len; i++)
		ptr[i] = str[i];

	return (ptr);
}
