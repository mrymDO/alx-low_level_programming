#include "main.h"

/**
 * _print_rev_recursion - Print a string in reverse
 * @s: string to be printed in reverse
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return;

	i--;

	_print_rev_recursion(s + 1);
	_putchar(s[i]);

}
