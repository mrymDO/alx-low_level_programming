#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: string
 */

void puts_half(char *str)
{
	int i = 0;
	int n = 0;

	while (str[n] != '\0')
		n++;
	for (i = n / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
