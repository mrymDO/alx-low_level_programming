#include "lists.h"
#include <stdio.h>


/**
 * print_listint - prints all elements of listint_t list
 * @h: pointer to the head of the list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;
	const listint_t *current = h;

	if (current == NULL)
		return (0);

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		i++;
	}

	return (i);
}
