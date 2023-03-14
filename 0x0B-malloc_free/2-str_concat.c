#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: ptr
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, j, max_len;

	i = 0;
	j = 0;
	max_len = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[i] != '\0')
	{
		max_len++;
		i++;
	}
	while (s2[j] != '\0')
	{
		max_len++;
		j++;
	}
	ptr = malloc(sizeof(char) * max_len);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		ptr[i] = s2[j];
		i++;
		j++;
	}
	return (ptr);
}
