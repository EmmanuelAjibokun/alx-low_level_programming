#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets x10
 * Return: returns zero ar the end
 */

void print_alphabet(void)
{
	char alp = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alp[i]);
		_putchar('\n');
	}

	return (0);
}
