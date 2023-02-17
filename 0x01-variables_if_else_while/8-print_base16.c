#include <stdio.h>
/**
 * main - Print all the numbers of base 16 in lowercase
 *
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	char a;

	for (i = 0; i < 16; i++)
	if (i < 10)
	putchar('0' + i);
	else
	putchar(a = 'a' + (i - 10));

	putchar('\n');
	return (0);
}
