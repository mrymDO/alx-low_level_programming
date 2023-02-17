#include <stdio.h>
/**
 * main - Prints the alphabet in lower case using putchar function
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z' ; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
