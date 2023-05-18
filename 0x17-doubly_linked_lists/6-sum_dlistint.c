#include "lists.h"

/**
 * sum_dlistint - return the sum of all data of a double linked list
 * @head: a pointer to the head of the double linked list
 * Return: sum of all data. if list empty return 0
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (head == NULL)
		return (0);

	current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
