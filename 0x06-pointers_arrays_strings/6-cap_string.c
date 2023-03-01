#include "main.h"

/**
 * cap_string - Capitalize all words of a string
 * @str: string
 * Return: string
 */

char *cap_string(char *str)
{
	int i;
	int separators[] = {',', ';', '.', '?', '"',
			    '(', ')', '{', '}', ' ', '\n', '\t', '!'};
	i = 0;
	while (str[i])
	{
	if (i == 0 || str[i - 1] == *separators)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
		str[i] -= 32;
		}
	}
	i++;
	}
	return (str);
}
