#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: pointer to the head of the list
 * @index: position of the node
 * Return: a pointer to the node at the index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *current;

	if (head == NULL)
		return (NULL);

	current = head;

	while (current != NULL)
	{
		if (index == i)
		{
			return (current);
		}
		current = current->next;
		i++;
	}

	return (NULL);
}
