#include "lists.h"

/**
 * listint_len - returns number of elements in a linked listint_t
 * @h: pointer to the head of linked list
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;
	const listint_t *current = h;

	if (current == NULL)
		return (0);

	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}
