#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a string
 * @str:  string to be duploicated
 * Return: on success a pointer to the duplicated string. Else, null
 */

char *_strdup(char *str)
{
	int i, j;

	char *dup;

	if (str == NULL)
		return (NULL);

	j = 0;
	while (str[j])
		j++;

	dup = malloc((j + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= j; i++)
		dup[i] = str[i];

	dup[j] = '\0';
	return (dup);
}

