#include <stddef.h>
#include "main.h"

/**
 * _strchr - A function that locates a character in a string.
 * @s: input value
 * @c: input value
 *
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
