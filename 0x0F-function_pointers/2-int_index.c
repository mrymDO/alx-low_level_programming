#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: pointer to an array of integers
 * @size: number of elements in the array
 * @cmp: pointer to function used to compare value
 * Return: index of the first element in the array that match with integer.
 * else return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == 0 || cmp == 0)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)

			return (i);
	}
	return (-1);
}
