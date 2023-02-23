#include "main.h"
/**
 * more_numbers - Print 10 times the numbers from 0 to 14
 * Return: void
 */
void more_numbers(void)
{
	int j = 0;

	while (j < 10)
	{
		int i;

		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
			_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		j++;
		_putchar('\n');
	}
}
