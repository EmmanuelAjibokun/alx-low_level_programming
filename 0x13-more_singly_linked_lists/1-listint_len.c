#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
* listint_len - counts number of nodes present
* @h: head pointer to first node
*
* Return: number of nodes
*/

size_t listint_len(const listint_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
