#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - returns a pointer to a newly allocated memory
 * @s1: string 1
 * @s2: string 2
 * @n: number of s2 to concatenate
 *
 * Return: a pointer to a newly allocated memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i,  j, str_len1, str_len2, total_len, counter;
	char *ptr;

	if (s1 == NULL)
		s1[0] = '\0';
	if (s2 == NULL)
		s2[0] = '\0';

	str_len1 = strlen(s1);
	str_len2 = strlen(s2);
	total_len = str_len1 + n;
	counter = 0;
	j = 0;

	ptr = malloc(sizeof(char) * total_len);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < str_len1; i++)
	{
		ptr[i] = s1[i];
		counter++;
	}

	if (n <= str_len2)
	{
		for (i = counter; i < total_len; i++)
		{
			while (j < n)
			{
				ptr[i] = s2[j];
				j++;
				break;
			}
		}
	}
	else
	{
		total_len = str_len1 + str_len2;

		for (i = counter; i < total_len; i++)
		{
			while (j < str_len2)
			{
				ptr[i] = s2[j];
				j++;
				break;
			}
		}
	}

	return (ptr);
}
