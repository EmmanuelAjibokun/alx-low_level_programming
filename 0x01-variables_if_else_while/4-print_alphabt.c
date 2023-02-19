#include <stdio.h>
/* more headers goes there */

/**
 * main - Main Function
 * Return: Return 0 if successful
 */
/* betty style doc for function main goes there */

int main(void)
{
	char alp[] = "abcdefghijklmnopqrstuvwxyz";

	int i;

	for (i = 0; i < 26; i++)
		if (alp[i] != 'e' && alp[i] != 'q')
			putchar(alp[i]);
		else
			continue;

	putchar('\n');

	return (0);
}
