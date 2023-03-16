#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat -  a function that concatenates two strings.
 * @s1: first string to be concatenate
 * @s2: second string to be concatenate
 * @n: number of bytes of s2
 * Return:pointer that point to the newly allocated memory? Else, return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	char *p;
	unsigned int len = 0;
	unsigned int len2 = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	for (i = 0; s2[i] && i < n; i++)
		len2++;

	p = malloc((len + len2 + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		p[i + j] = s2[j];
	}

	p[i + j] = '\0';

	return (p);
}
