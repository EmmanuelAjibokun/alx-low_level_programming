#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint - adds new node to the front of the stack
 * @head: pointer to NULL
 * @n: value to add to stack
 *
 * Return: node value
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;
		*head = new_node;
		new_node->next = temp;
	}

	return (*head);
}
