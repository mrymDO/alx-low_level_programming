#include "lists.h"
#include <stdio.h>
#include <stdliib.h>
/**
 * print_listint_safe - prints listint_t linked list
 * @head: pointer to the head list
 * Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	unsigned int i = 0;

	if (current == NULL)
	{
		return (0);
		exit(98);
	}

	while (current->next != *head)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		current->next = current->next->next;
		i++;
	}
	return (i);
}
