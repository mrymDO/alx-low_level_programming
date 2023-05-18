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

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	current = *h;

	while ((current != NULL) && (i < idx - 1))
	{
		current = current->next;
		i++;
	}
	if ((current == NULL) && i < idx - 1)
	{
		free(new_node);
		return (NULL);
	}

	if (current == NULL)
		return (add_dnodeint_end(h, n));

	new_node->next =  current->next;
	if (current->next != NULL)
		current->next->prev = new_node;
	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}
