#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int _isdigit(int c);
int _atoi(char *s);
int _strlen(char *s);
char *_strcpy(char *s1, char *s2);

/**
 * main - multiply 2 positive numbers
 * @argc: number of arguments
 * @argv: arguments
 * Return: product of 2 positive numbers
 */

int main(int argc, char **argv)
{
	char *num1;
	char *num2;
	int i, n1, n2, result;

	if (argc != 3)
	{	printf("Error\n");
		exit(98);
	}

	num1 = malloc((_strlen(argv[1]) + 1) * sizeof(char));
	num2 = malloc((_strlen(argv[2]) + 2) * sizeof(char));

	if (num1 == NULL || num2 == NULL)
	{
		printf("Error\n");
		exit(98);
	}
	_strcpy(num1, argv[1]);
	_strcpy(num2, argv[2]);

	for (i = 0; num1[i]; i++)
	{
		if (!_isdigit(num1[i]))
		{
			printf("Error\n");
			free(num1);
			free(num2);
			exit(98);
		}
	}

	for (i = 0; num2[i]; i++)
	{
		if (!_isdigit(num2[i]))
		{
			printf("Error\n");
			free(num1);
			free(num2);
			exit(98);
		}
	}
	n1 = _atoi(num1);
	n2 = _atoi(num2);

	result = n1 * n2;

	printf("%d\n", result);

	free(num1);
	free(num2);

	return (0);
}

/**
 * _isdigit - Check for a digit
 * @c: input
 * Return: 1 if c is a digit, else 0
 */
int _isdigit(int c)
{
	return ((c >= '0') && (c <= '9'));
}

/**
 * _atoi - convert a string to an integer
 * @s: string to be converted
 * Return: the integer converted from the string
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ')
		i++;

	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (s[i] == '+')
		i++;

	while (s[i] >= '0' && s[i] <= '9')
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	return (sign * result);
}

/**
 * _strlen - A function that returns the lenght of a string
 * @s: string
 * Return: lengh
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * _strcpy - a function that copies a string
 * @s1:  buffer pointed to by s1
 * @s2: string pointed to by s2
 * Return: the pointer to s1
 */
char *_strcpy(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s2[i])
		i++;

	for (; j < i; j++)
		s1[j] = s2[j];

	s1[i] = '\0';

	return (s1);
}
