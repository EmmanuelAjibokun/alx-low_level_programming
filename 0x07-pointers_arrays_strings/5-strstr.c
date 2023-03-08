#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _strstr - Locates a substring.
 * @haystack: input value
 * @needle: input value
 *
 * Return: needle
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, li;

	li = strlen(needle) - 1;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if ((needle[j] == haystack[i]) && (needle[j + li] == haystack[i + li]))
				return (&needle[j]);

	}

	return (NULL);
}
