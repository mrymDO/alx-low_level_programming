#include "main.h"

/**
 * _strcat - A function that concatenates two strings
 * @dest: destination of the string
 * @src: source of the string
 * Return: two concat strings
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i])
	{
		i++;
	}

	j = 0;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
