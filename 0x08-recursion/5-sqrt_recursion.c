#include "main.h"

/*
 * _sqrt_wrapper - Returns the natural square root of a number.
 * _sqrt_recursion - Calls the recursive function.
 * @n: integer to get squate root
 * @min: lower boundary
 * @max: upper boundary
 *
 * Return: value of root;
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
		return(_sqrt_wrapper(n, guess + 1, max));
	else
		return (_sqrt_wrapper(n, min, guess - 1));
}

int _sqrt_recursion(int n)
{
	return (_sqrt_wrapper(n, 1, n));
}
