#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * str_concat -  pointer should point to a newly allocated
 * space in memory which contains the contents of s1,
 * followed by the contents of s2
 * @s1: string input
 * @s2: string input
 *
 * Return: NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, str_len1, str_len2, total_len, counter;
	char *ptr;

	if (s1 == NULL)
		s1[0] = '\0';
	if (s2 == NULL)
		s2[0] = '\0';

	str_len1 = strlen(s1);
	str_len2 = strlen(s2);
	total_len = str_len1 + str_len2;
	counter = 0;
	j = 0;

	ptr = malloc((sizeof(char) * total_len) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < str_len1; i++)
	{
		ptr[i] = s1[i];
		counter++;
	}

	for (i = counter; i < total_len; i++)
	{
		while (j < str_len2)
		{
			ptr[i] = s2[j];
			j++;
			break;
		}
	}

	return (ptr);
}
