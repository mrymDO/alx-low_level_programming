#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s:string to be scanned
 * @accept: string containing character to match
 * Return: length s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;

		}
		if (accept[j] == '\0')
			break;
	}
	return (i);
}

