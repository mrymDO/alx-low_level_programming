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

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	putchar('\n');
}
