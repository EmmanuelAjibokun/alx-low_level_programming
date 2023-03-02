#include "main.h"
#include <string.h>

/**
 * _strncat - append n characters from string2 to string1
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int str_length;

	str_length = strlen(dest);

	for (i = 0; i < n; i++)
	{
		if (str[i] == '\0')
			break;
		dest[str_length] = src[i];
		str_length += 1;
	}

	return (dest)
}
