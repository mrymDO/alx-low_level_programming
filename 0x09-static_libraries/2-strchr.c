#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to be scanned
 * @c: the character to be searched in str
 * Return: the first occurence of chracter c or NULL if character not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		return (s);
		s++;
	}
	if (*s != c)
		return ('\0');

	return (s);
}
