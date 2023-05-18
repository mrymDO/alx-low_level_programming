#include "lists.h"

/**
 * print_dlistint - print element of a double linked list
 * @h: pointer to the head of the double linked liste
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current;
	size_t count;

	if (h == NULL)
		return (0);

	current = h;
	count = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
