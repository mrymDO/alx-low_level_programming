#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list list_t
 * @h: a pointer to the head node of the linked list
 * Return: the length of the list as a value of type size_t
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}

