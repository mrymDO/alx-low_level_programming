#include "lists.h"
#include <stdlib.h>

/**
 * free_list: function that frees memory allocated to each node
 * of the linked list
 * @head: pointer to the head of linked list of type list_t
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next_node = NULL;


	while (current->next != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}

