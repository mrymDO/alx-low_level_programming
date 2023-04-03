#include "lists.h"

/**
 * sum_listint - returns sum of the data of a listint_t linked list
 * @head: pointer to the head of linked list
 * Return: sum of the data stored in the list. Returns 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	listint_t *current = head;

	if (current == NULL)
		return (0);

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
