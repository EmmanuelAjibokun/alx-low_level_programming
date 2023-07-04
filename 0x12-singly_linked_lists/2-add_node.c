#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node - prints all elements in nodelist
 * @head: pointer to nodelist
 * @str: pointer to node's content
 *
 * Return: address or NULL;
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->next = *head;
	*head = new;

	return ((*head)->next);
}
