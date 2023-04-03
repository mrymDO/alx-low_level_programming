#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t
 * @head: pointer to pointer to the head list
 * Return: head node's data(n). If likend list empty return 0
 */

int pop_listint(listint_t **head)
{
	int temp;
	listint_t *next_node;

	if (*head == NULL)
		return (0);

	temp = (*head)->n;

	next_node = (*head)->next;

	free(*head);

	*head = next_node;

	return (temp);
}
