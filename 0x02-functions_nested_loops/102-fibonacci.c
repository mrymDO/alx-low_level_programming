#include <stdio.h>
/**
 * main -  the first 50 Fibonacci numbers starting with 1 and 2
 * Return: 0
 */

int main(void)
{
	long int i, j, c, count;

	i = 0;
	j = 1;
	for (count = 0; count < 50; count++)
	{
		c = i + j;
		i = j;
		j = c;
		printf("%ld", c);
		if (count == 49)
			putchar('\n');
		else
			printf(", ");
	}
	return (0);
}
