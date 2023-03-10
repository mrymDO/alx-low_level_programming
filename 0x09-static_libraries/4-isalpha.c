#include "main.h"
/**
 * _isalpha - check for alphabetic character
 * @c: character
 * Return: 1 if is a letter, if not 0
 */

int _isalpha(int c)
{
	char i;
	char j;

	for (i = 'a', j = 'A'; i <= 'z' || j <= 'Z'; i++, j++)
{
	if (c == i || c == j)
	return (1);
}
	return (0);
}
