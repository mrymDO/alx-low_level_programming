#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the opcodes of its own main faunction
 * @argc: number of arguements
 * @argv: command line argument
 * Return : 0  (success)
 */

int main(int argc, char *argv[])
{
	int i, num_byte;
	char *p = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	num_byte = atoi(argv[1]);

	if (num_byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < num_byte; i++)
	{
		printf("%02x", p[i]);
	}
	printf("\n");

	return (0);
}


