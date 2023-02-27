#include "main.h"
#include <stdio.h>
/**
 * print_array - function that prints n elements of an array of integer
 * @n: number of element of an array
 * @a: array of elements
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
	printf("%d, ", a[i]);
	}
	if (i == n - 1)
	printf("%d\n", a[i]);
}
