#include <stdio.h>
#include <string.h>
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

	for (i = (strlen(alp) - 1); i >= 0; i--)
		putchar(alp[i]);

	putchar('\n');

	return (0);
}
