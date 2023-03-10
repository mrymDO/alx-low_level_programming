#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a program that adds positive numbers
 * @argc: number of arguments
 * @argv: command line arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int i, sum, num;

	sum = 0;

	if (argc == 1)
	{
		printf("%d\n", sum);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
	if (!isdigit(*argv[i]))
		{
		printf("Error\n");
		return (1);
		}
	num = atoi(argv[i]);
	sum += num;
	}
	printf("%d\n", sum);

	return (0);
}
