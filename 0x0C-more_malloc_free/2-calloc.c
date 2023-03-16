#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: number of item to save in allocated memory
 * @size: gives number of bytes that each items takes
 * Return: pointer to allocated memory. if faillure returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	a = malloc(nmemb * size);

	if (a != NULL)
	{
		for (i = 0; i < nmemb; i++)
		{
			a[i] = 0;
		}
	}

	return (a);
}

