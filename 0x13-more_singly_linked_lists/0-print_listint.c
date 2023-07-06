#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
* print_listint - prints all nodes in list
* @h: head pointer to first node
*
* Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}

	return (counter);
}
