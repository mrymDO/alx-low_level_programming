#include "main.h"
/**
 * print_last_digit - print the last digit of a number
 * @i: the last digit
 * Return: the value of the last digit
 */
int print_last_digit(int i)
{
	int j;

	if (i < 0)
		j = -1 * (i % 10);
	else
		j = i % 10;
	_putchar(j + '0');
	return (j);
}
