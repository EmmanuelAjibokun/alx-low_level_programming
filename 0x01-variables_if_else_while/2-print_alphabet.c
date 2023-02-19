#include <stdlib.h>
#include <time.h>
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

	for (int i=0; i<26; i++)
		putchar(alp[i]);

	putchar('\n');

	return (0);
}
