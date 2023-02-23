#include "main.h"
/**
 * print_triangle - Print a triangle
 * @size: size of triangle
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = size; i > 0; i--)
	{
		for (j = 1; j <= size; j++)
		{
			if (j >= i)
			_putchar('#');
		else
			_putchar(' ');
		}
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
