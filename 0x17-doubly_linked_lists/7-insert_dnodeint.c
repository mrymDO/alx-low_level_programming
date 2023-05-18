#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a given position
 * @h: pointer to the head of the double linked list
 * @idx: index of the list where the new node should be added
 * @n: data that the new node will contained
 * Return: a pointer to the new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		*h = new_node;
		return (new_node);
	}

	current = *h;

	while ((current != NULL) & (i < idx))
	{
		current = current->next;
		i++;
	}

	if ((current->next == NULL) & (i == idx))
	{
		current->next = new_node;
		new_node->next = NULL;
		new_node->prev = current;
		return (new_node);
	}

	new_node->next =  current->next;
	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
