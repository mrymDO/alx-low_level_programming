#include "main.h"
/**
 * _strncpy - A function that copies a string
 * @dest: copy to
 * @src: copy from
 * @n: number of characters to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}
