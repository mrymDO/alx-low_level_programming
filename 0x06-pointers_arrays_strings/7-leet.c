#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @str: string to be encoded
 * Return: str
 */

char *leet(char *str)
{
	int i, j;
	int a[] = { 'a', 'e', 'o', 't', 'l' };
	int b[] = { 'A', 'E', 'O', 'T', 'L' };
	int c[] = { '4', '3', '0', '7', '1' };

	i = 0;

	while (str[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == a[j] || str[i] == b[j])
			{
				str[i] = c[j];
			}
		}
		i++;
	}
	return (str);
}
