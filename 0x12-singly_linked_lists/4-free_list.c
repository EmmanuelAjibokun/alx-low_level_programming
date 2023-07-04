#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_list - free all nodes in nodelist
 * @head: pointer to nodelist
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *nodelist;

	while (head != NULL) /* get last node address */
	{
		nodelist = head->next;
		free(head->str);
		free(head);
		head = nodelist;
	}

}
