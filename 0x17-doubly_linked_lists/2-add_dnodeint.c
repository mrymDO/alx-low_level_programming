#include "lists.h"

/**
 * add_dnodeint - add a new node at the begining of a double linked list
 * @head: pointer to a pointer to the head of a double linked list
 * @n: data for the new node
 * Return: a pointer to the new node or NULL if it failled
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		new_node->next = *head;
	}
	else
	{
		new_node->next = *head;
		(*head)->prev = new_node;
	}
	*head = new_node;
	return (new_node);
}
