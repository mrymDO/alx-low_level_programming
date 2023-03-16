#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block 
 * @ptr: pointer to the start of a peice of memory space previously allocated
 * @old_size: total byte number to change
 * @new_size: new total byte number to the new memory block
 * Return: a pointer to the new memory block. else return NULL if it failled
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	int i;

	  if (ptr != NULL && new_size == 0)
        {
                free(ptr);
                return (NULL);
        }

	  if (ptr == NULL)
	  {
                p = malloc(new_size);
		if (p == NULL)
		{
			return (NULL);
		}
		return (p);
	  }


	if (new_size == old_size)
		return (ptr);
	



	p = malloc(new_size);
	
	if (p == NULL)
		return(NULL);
	
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		p[i] = ptr[i];
	}
	else
	{
		for (i = 0, i < old_size; i++)
			p[i] = ptr[i];
	}

	
	free(ptr);

	return (p);
}


