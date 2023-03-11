#include "main.h"

/**
 * _sqrt_wrapper - Returns the natural square root of a number.
 * @n: integer to get square root of
 * @min: lower boundary
 * @max: upper boundary
 *
 * Return: value of root
 */

int _sqrt_wrapper(int n, int min, int max)
{
	int guess, guess_squared;

	if (max < min)
		return (-1);
	guess = (min + max) / 2;
	guess_squared = guess * guess;

	if (guess_squared == n)
		return (guess);
	else if (guess_squared < n)
		sqrt_wrapper(n, guess + 1, max);
	else
		sqrt_wrapper(n, min, guess - 1);
}

int _sqrt_recursion(int n)
{
	sqrt_wrapper(n, 1, n);
}
