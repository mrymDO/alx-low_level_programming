#include "search_algos.h"

/*
 * linear_search - Searches for a value in an array of integers
 * using linear searach algo
 * @array: pointer to the 1st element of the array ro search in
 * @size: number of elements in array
 * @value: the target item to search for
 * Return: the index of the 1st occurence of the value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
