#include "lists.h"

/**
 * dlistint_len - number of elements in a double linked list
 * @h: pointer to the head of the double linked list
 * Return: number of element
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count = 0;

	if (h == NULL)
		return (0);

	current = h;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
