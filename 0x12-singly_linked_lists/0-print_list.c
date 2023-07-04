#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints all elements in nodelist
 * @h: pointer to nodelist
 *
 * Return: node counter;
 */

size_t print_list(const list_t *h)
{
	int counter;

	counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		counter++;
		h = h->next;
	}

	return (counter);
}
