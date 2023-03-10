#include <stdio.h>
#include <stdlib.h>
/**
 * main - aprogram that multiplies two numbers
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int sum = 0;

	if  (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	sum = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", sum);

	return (0);
}
