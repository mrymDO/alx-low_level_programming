#include "lists.h"
#include <stdio.h>

/**
 * print_list - print data stored in each node of the linked list
 * @h: a pointer to the head of a linked list
 * Return: number of nodes in the list
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	unsigned int len = 0;
	char *str = NULL;


	while (str)
		len++;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		count++;
	}
	return (count);
}
