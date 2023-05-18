#include "lists.h"

/**
 * delete_dnodeint_at_index - delete the node at index of a doubly linked list
 * @head: pointer to the head of the doubly linked list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	temp = *head;

	while ((temp != NULL) && (i < index))
	{
		temp = temp->next;
		i++;
	}
	if (temp == NULL)
		return (-1);

	if (temp->next != NULL)
		temp->next->prev = temp->prev;
	if (temp->prev != NULL)
		temp->prev->next = temp->next;
	free(temp);
	return (1);
}
