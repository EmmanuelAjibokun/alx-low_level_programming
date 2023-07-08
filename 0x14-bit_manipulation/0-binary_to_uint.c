#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 ** my_pow - return exponential value
 * @pow: get argument of power
 * @exp: get argument of exp
 * @b: string
 *
 * Return: decimal number
 */

int my_pow(int pow, int exp)
{
	int j;

	if (exp == 0)
		return (1);
	for (j = 0; j < exp; j++)
		pow *= exp;
	return (pow);
}

unsigned int binary_to_uint(const char *b)
{
	int str_len, i, exp, pow;
	unsigned int dec;

	pow = 2;
	dec = 0;
	exp = 0;
	str_len = strlen(b);

	if (b == NULL)
		return (0);
	for (i = str_len - 1; i >= 0; i--)
	{
		switch (b[i])
		{
			case '0':
				dec += 0 * my_pow(pow, exp);
				exp++;
				break;
			case '1':
				dec += 1 * my_pow(pow, exp);
				exp++;
				break;
			default:
				return (0);
		}
	}

	return (dec);
}
