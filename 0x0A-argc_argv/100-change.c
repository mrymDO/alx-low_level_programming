#include <stdio.h>
#include <stdlib.h>

/**
 * main - print min num of coins to make change fot an amount of money
 * @argc: number of arguments
 * @argv: command line arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int units[] = {25, 10, 5, 2, 1};

	int tmp = 0;

	int total = 0;

	int i, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		tmp = cents / units[i];
		total += tmp;
		cents -= tmp * units[i];
	}

	printf("%d\n", total);
	return (0);
}



