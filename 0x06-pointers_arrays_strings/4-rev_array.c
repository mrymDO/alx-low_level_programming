#include "main.h"
/**
 * reverse_array - A function that reverses the content of an array of integers
 * @a: input
 * @n: number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n; i++)
	{
		n--;
		t = a[i];
		a[i] = a[n];
		a[n] = t;

	}
}
