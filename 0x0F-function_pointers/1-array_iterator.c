#include "function_pointers.h"

/**
 * array_iterator - executes a function given as parameter
 * on each element of an array
 * @array: array to be processed
 * @size: size of the array
 * @action: pointer to the function to be executed on each element
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != 0 and action != 0)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
