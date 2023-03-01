#include "main.h"

/**
 * cap_string - Capitalize all words of a string
 * @str: string
 * Return: string
 */

char *cap_string(char *str)
{
	int i, j;
	int delt = 'a' - 'A';
	int separators[] = {',', ';', '.', '?', '"',
			    '(', ')', '{', '}', ' ', '\n', '\t'};

	i = 0;
	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;

		for (j = 0; separators[j]; j++)
		{
			if (str[i - 1] == separators[j] && str[i] >= 'a' && str[i] <= 'z')
				str[i] -= delt;
		}
		i++;

	}
	return (str);
}
