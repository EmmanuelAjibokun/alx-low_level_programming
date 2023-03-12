#include <string.h>
#include "main.h"

/**
 * _strncpy - copy string2 to string1
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int src_length;

	src_length = 0;

	for (i = 0; i < n; i++)
	{
		dest[src_length] = src[i];
		src_length++;
	}

	return (dest);
}
