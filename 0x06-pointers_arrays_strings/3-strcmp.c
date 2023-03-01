#include "main.h"

/**
 * _strcmp - A function that compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 (success)
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] != s2[i])
			return (*s1 - *s2);
	}
	return (0);
}
