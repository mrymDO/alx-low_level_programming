#include "main.h"
/**
 * print_alphabet_x10 -  print 10 times the alphabet in lowercase
 */

void print_alphabet_x10(void)
{
	char letter;
	int j;

	for (j = 0; j < 10; j++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}

