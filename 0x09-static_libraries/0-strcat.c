#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: dest
 */


char *_strcat(char *dest, char *src)
{
	dest = strcat(dest, src);
	return (dest);
}
