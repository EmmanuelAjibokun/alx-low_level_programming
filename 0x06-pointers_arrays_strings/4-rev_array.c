#include "main.h"
/**
 * reverse_array - print reverse of array
 * @a: input value
 * @n: input value
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int arr_len, index;

	arr_len = sizeof(a) / sizeof(a[0]);
	index = arr_len - 1;
	while (index >= 0)
	{
		_putchar(a[index]);

		index--;
	}
	_putchar('\n');
}
