#include "main.h"
#include <stdlib.h>
/**
 * free_words - frees memory
 * @string: pointer to string to be free
 * @i: counter
 */
void free_words(char **string, int i)
{
	for (; i > 0;)
		free(string[--i]);
	free(string);
}
/**
 * strtow - function that splits a string into words
 * @str: input string
 * Return: a pointer to an array of strings or NULL if it fails
 */
char **strtow(char *str)
{
	int i, j, k, num;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);
	num = 0;
	for (i = 0; str[i]; i++)
		if ((i == 0 && str[i] != ' ') || (str[i] != ' ' && str[i - 1] == ' '))
			num++;

	words = malloc((num + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	j = 0;
	for (i = 0; str[i]; i++)
	{
		if ((i == 0 && str[i] != ' ') || (str[i] != ' ' && str[i - 1] == ' '))
		{
			k = i;
			while (str[k] != ' ' && str[k] != '\0')
				k++;
			words[j] = malloc((k - i + 1) * sizeof(char));
			if (words[j] == 0)
			{
				free_words(words, j);
				return (NULL);
			}
			k = 0;
			while (str[i] != ' ' && str[i] != '\0')
			{
				words[j][k] = str[i];
				i++;
				k++;
			}
			words[j][k] = '\0';
			j++;
		}
	}
	words[j] = NULL;
	return (words);
}
