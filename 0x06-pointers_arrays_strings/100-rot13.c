#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @str: String to encoded
 * Return: String
 */

char *rot13(char *str)
{
	int i, j;
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (str[i])
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
