#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at index
 * @head: a pointer to a pointer to the head
 * @index: position at which the node will be deleted
 * Return: 1 succeed. -1 failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *current, *deletenode;

	if (*head == NULL)
		return (1);

	if (index == 0)
	{
		deletenode = *head;
		*head = (*head)->next;
		free(deletenode);
		return (1);
	}

	current = *head;

	while (current != NULL && i < (index - 1))
	{
		current = current->next;
		i++;
	}

	deletenode = current->next;
	current->next = deletenode->next;
	free(deletenode);
	return (1);
}
