#include <stdio.h>

/**
 * main - program that prints number of arguments passed into it
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 (success)
 */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int i, count;

	count = 0;

	for (i = 1; i < argc; i++)
	{
		count++;
	}
	printf("%d\n", count);

	return (0);
}
