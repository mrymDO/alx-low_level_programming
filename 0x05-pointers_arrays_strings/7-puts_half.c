#include "main.h"

/**
 * puts_half - Print half of a string
 * @str: input string to print
 */
void puts_half(char *str)
{
	int i = 0;
	int n = 0;

	while (str[n] != '\0')
		n++;
	if (n % 2 == 0)
		i = n / 2;
	else
		i = (n + 1) / 2;
	while (i < n)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
