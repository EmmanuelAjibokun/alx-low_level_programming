#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets x10
 * Return: returns zero ar the end
 */

void print_alphabet_x10(void)
{
	char alp;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}

		_putchar('\n');
	}
}
