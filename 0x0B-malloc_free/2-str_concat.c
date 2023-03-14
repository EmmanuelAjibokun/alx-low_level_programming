#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: ptr
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, k, max_len;

	i = 0;
	j = 0;
	max_len = 0;

	while (s1[i] != '\0')
	{
		max_len++;
		i++;
	}

	while (s2[j] != '\0')
	{
		max_len++;
		j++;
	}

	ptr = malloc(sizeof(char) * max_len);
	if (ptr == NULL)
		return (NULL);

	for (k = 0; k < max_len + i; k++)
	{
		if (k > 5)
			ptr[k] = s2[k - i];
		else
			ptr[k] = s1[k];
	}
	return (ptr);
}
