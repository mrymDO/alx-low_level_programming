#include "main.h"
/**
 * _strlen - A function that returns the lenght of a string
 * @s: string
 * Return: lengh
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
