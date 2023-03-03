#include "main.h"
#include <string.h>

/**
 *_strcmp - compare first character of string
 * @s1: input value
 * @s2: input value
 *
 * Return: result
 */

int _strcmp(char *s1, char *s2)
{
	int i, result;

	i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && i < 1)
	{
		if (s1[i] != s2[i])
			result = s1[i] - s2[i];
		i++;
	}

	return (result);
}
