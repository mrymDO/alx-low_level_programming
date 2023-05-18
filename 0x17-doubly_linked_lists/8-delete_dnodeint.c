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
	dlistint_t *temp2, *temp;

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
	{
		temp2 = temp->prev;
		temp2->next = NULL;
		return (1);
	}
	temp2 = temp->prev;
	temp2->next = temp->next;
	temp->next->prev = temp2;
	return (1);
}
