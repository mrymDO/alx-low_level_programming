#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @b: the value to be set
 * @n: number of bytes to be set to the value
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;
	while (s[i])
	{
		for (i = 0; i < n; i++)
			_putchar('b');
	}
	i++;
	return (s);
}
