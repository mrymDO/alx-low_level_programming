#include "main.h"

/**
 * _strcmp - A function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 (success)
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0; s1[i]; i++)
	{
		for (j = 0; s2[j]; j++)
		{
			if (s1[i] != s2[j])
			return (*s1 - *s2);
		}
	}
	return (0);
}
