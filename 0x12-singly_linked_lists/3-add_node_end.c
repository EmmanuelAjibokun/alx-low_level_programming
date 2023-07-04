#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - prints all elements in nodelist
 * @head: pointer to nodelist
 * @str: pointer to node's content
 *
 * Return: address or NULL;
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *current;
	char *node;

	current = *head;
	node = strdup(str);
	if (node == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = node;
	new->len = strlen(node);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
	}

	return (new);
}
