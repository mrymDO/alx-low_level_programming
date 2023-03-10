#include "main.h"

/**
 * _strncat - A function thaconcatenate two strings by copying only n bytes
 * @dest: destination of string
 * @src: source of string
 * @n: Bytes will be appended
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i])
	{
		i++;
	}

	j = 0;
	while (src[j] && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}

