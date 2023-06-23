#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * op_add - add integers
 * op_sub - subtract integers
 * op_mul - multiply integers
 * op_div - divide integers
 * op_mod - modulus operation
 *
 * Return: integer
 */

int op_add(int a, int b)
{
	op_t op;
	op = atoi(a) + atoi(b);
	return (op);
}

int op_sub(int a, int b)
{
	op_t op;
	op = atoi(a) - atoi(b);
	return (op);
}

int op_mul(int a, int b)
{
	op_t op;
	op = atoi(a) - atoi(b);
	return (op);
}

int op_div(int a, int b)
{
	op_t op;
	op = atoi(a) / atoi(i);
	return (op);
}

int op_mod(int a, int b)
{
	op_t op;
	op = atoi(a) % atoi(b);
	return (op);
}
