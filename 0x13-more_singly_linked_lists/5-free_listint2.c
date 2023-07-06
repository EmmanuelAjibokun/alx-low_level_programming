#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * free_listint2 - frees all elements in nodelist
 * @head: pointer to NULL/next node
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *node;
	listint_t *next;

	node = *head;

	while (node != NULL)
	{
		next = node->next;
		free(node);
		node = next;
	}
	*head = NULL;
}
