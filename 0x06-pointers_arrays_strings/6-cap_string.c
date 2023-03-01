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
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}

	i++;
	while (str[i])
	{
		int j;

		for (j = 0; j < 13; j++)
		{
		if (str[i] == separators[j])
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			str[i + 1] -= 32;
		}
		}
		i++;
	}
	return (str);
}
