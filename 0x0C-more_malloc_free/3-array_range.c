#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: first value of the array
 * @max: last value of the array
 * Return: pointer to the array. If faillure return NULL
 */

int *array_range(int min, int max)
{
	int *array;
	int i;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);


	for (i = min; i <= max; i++)
		array[i] = i;

	return (array);
}


