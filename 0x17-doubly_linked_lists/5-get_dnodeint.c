#include "lists.h"

/**
 * get_dnodeint_at_index - return a node at a specific index
 * @head: pointer to the head of the double linked list
 * @index: position of the node to be returned
 * Return: Node a index or NULL if it does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	current = head;

	while ((current != NULL) & (i < index))
	{
		current = current->next;
		i++;
	}

	return (current);
}
