#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * list_len - prints all elements in nodelist
 * @h: pointer to nodelist
 *
 * Return: node counter;
 */

size_t list_len(const list_t *h)
{
	int counter;

	counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
