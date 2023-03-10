#include "main.h"
/**
 * _strcpy - a function that copies a string
 * @dest:  buffer pointed to by dest
 * @src: string pointed to by src
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	for (; j < i; j++)
	{
		dest[j] = src[j];
	}

	dest[i] = '\0';
	return (dest);
}

