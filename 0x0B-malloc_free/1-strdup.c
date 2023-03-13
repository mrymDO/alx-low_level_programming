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

	j = 0;
	while (str[j])
		j++;

	if (j == 0)
		return (NULL);

	dup = malloc(j * sizeof(char));
	if (dup == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		dup[i] = str[i];

	dup[i] = ('\0');
	return (dup);
}

