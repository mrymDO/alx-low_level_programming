#include "main.h"
/**
 * print_numbers - Print the numbers, from 0 to 9
 * Return: void
 */
void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
		_putchar('\n');
}
