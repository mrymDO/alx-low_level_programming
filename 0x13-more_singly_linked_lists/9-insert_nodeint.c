#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: pointer to a pointer to the head of linked list
 * @idx: the position at which the new node should be inserted
 * @n: the data to be stored in the new node
 * Return: pointer to the new node. NULL if insertion fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;

	listint_t *current = *head;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node ==  NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}


	while (current != NULL && i < (idx - 1))
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
		new_node->next = current->next;
		current->next = new_node;

	return (new_node);
}
