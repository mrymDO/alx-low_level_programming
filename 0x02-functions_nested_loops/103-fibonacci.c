#include <stdio.h>
/**
 * main - sum fibonacci numbers
 * Return: 0
 */

int main(void)
{
	long int i, j, c, count, sum;

	i = sum = 0;
	j = 1;
	for (count = 0; count < 50; count++)
	{
		c = i + j;
		i = j;
		j = c;
		if (c % 2 == 0 && c < 4000000)
			sum += c;
	}
	printf("%ld\n", sum);
	return (0);
}
