#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: input value
 *
 * Return: s
 */

char *leet(char *s)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (s[i] == s1[j])
				s[i] = s2[j];
			else
				s[i] = s[i];
		}
	}
	return (s);
}
