#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a new node with the string as its data
 * to the beginning of the linked list
 * @head: a double pointer to the head node of the linked list
 * double pointer is used because the function may need to modify
 * the head node if a new node is added
 * @str: pointer to string that will be used as the data for the new node
 * Return: a pointer to the new node. if function fails it returns NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	if (str == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);

	new_node->next = *head; /*sets the next field  to current head of the list*/
	*head = new_node; /*updates the head of the list to point to the new node*/

	return (new_node);
}



