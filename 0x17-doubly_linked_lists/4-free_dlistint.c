#include "lists.h"

/**
 * free_dlistint - free a double linked list
 * @head: pointer to the head of the linked list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		free(head);
		current = current->next;
		head = current;
	}
}
