#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - perform arithmetic operations
 * @argc: number of arguments
 * @argv: command line arguments
 * Return: 0 (success)
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*arith_op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	arith_op = get_op_func(argv[2]);
	if (arith_op == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if (num2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
	       printf("Error\n");
	       exit(100);
	}

	printf("%d\n", arith_op(num1, num2));
	return (0);
}
