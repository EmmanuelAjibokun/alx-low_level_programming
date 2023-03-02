#include <string.h>

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
	int dest_length;
	int index;

	src_length = 0;
	dest_length = strlen(dest);
	index = dest_length - 1;

	while (index >= 0)
	{
		dest[index] = '\0';
		index--;
	}

	for (i = 0; i < n; i++)
	{
		dest[src_length] = src[i];
		src_length++;
	}

	return (dest);
}
