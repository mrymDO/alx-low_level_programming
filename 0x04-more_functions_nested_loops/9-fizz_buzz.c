#include "main.h"
#include <stdio.h>
/**
 * main - Print numbers from 1 to 100
 * 3 multipiles print Fizz
 * 5 multipiles print Buzz
 * 3 and 5 multipiles print FizzBuzz
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
		printf("Buzz\n");
		else if (i % 5 == 0 && i % 3 == 0)
		printf("FizzBuzz ");
		else if (i % 5 == 0)
		printf("Buzz ");
		else if (i % 3 == 0)
		printf("Fizz ");
		else
		printf("%d ", i);
	}
return (0);
}
