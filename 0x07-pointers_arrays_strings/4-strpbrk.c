#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: string to be scanned
 * @accept: string containing character to match
 * Return: point to a character in s that matches in accept
 * Otherwise it returns NULL of no match found
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
	}
	return ('\0');
}
