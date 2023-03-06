#include "main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: input value
 * @b: input value
 * @n: input value
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
