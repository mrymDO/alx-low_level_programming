#include "main.h"
/**
 * _islower -  checks for lowercase characte
 * @c: the character
 * Return: 1 if is lowercas, 0 if not
 */
int _islower(int c)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i)
			return (1);
	}
	return (0);
}
