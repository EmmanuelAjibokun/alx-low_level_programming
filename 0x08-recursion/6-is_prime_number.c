#include "main.h"

/*
 * is_prime_num - returns a recursive call to itself
 * is_prime_number - calls the recursive function
 * @n: input value
 * @min: minimum value to divide with
 * @divisor: number of dividable times
 *
 * Return: 1 for prime numbers, and 0 for non-prime numbers

int is_prime_num(int n, int min, int divisor)
{
	int check_prime, rec_counter;

	rec_counter = min + 1;
	check_prime = n % rec_counter;

	if (check_prime == 0)
		divisor += 1;

	if (rec_counter == n)
	{
		if (divisor == 1)
			return (1);
		else
			return (0);
	}
	else
		return (is_prime_num(n, rec_counter, divisor));
}

int is_prime_number(int n)
{
	int min = 1;

	if (n <= min)
		return (0);

	return (is_prime_num(n, min, 0));
}
