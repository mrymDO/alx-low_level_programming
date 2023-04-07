#include "main.h"

/**
 * print_binary - Prints binary representation of a number
 * @n: input number
 * Return: binary representation of n
 */

void print_binary(unsigned long int n)
{
	int i = 0;
	int num = sizeof(unsigned long int) * 8;

	if (n == 0)
		_putchar('0');
	else
	{
		for (i = num - 1; i >= 0; i--)
		{
			if ((n >> i) & 1)
				break;
		}
		for (; i >= 0; i--)
		{
			if ((n >> i) & 1)
				_putchar('1');
			else
				_putchar('0');
		}
	}
}
