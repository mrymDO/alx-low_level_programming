#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string to be scanned
 * @needle: small string to be searched
 * Return: NULL if no match. Else, pointer to first occurence
 */
char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
			if (*b == '\0')
				return (haystack);
	}
	return (0);
}
