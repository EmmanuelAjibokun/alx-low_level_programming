#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: input value
 *
 * Result: s
 */

char *rot13(char *s)
{
	int i, j;
	char alp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alp_13th[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alp[j] != '\0'; j++)
		{
			if (s[i] == alp[j])
			{
				s[i] = alp_13th[j];
				break;
			}
		}
	}
	return (s);
}
