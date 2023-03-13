#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer (contains content of s1 and s2). Else NULL
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;

	char *cat;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i])
		i++;

	j = 0;
	while (s2[j])
		j++;

	cat = malloc(((i + j) * sizeof(char)) + 1);

	if (cat == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		cat[i] = s1[i];

	for (j = 0; s2[j]; j++)
		cat[i + j] = s2[j];

	cat[i + j] = '\0';
	return (cat);
}


