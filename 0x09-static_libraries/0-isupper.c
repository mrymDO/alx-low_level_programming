#include "main.h"
/**
 * _isupper - a function that check if a letter is uppercase
 * @a: char to check
 * Return: 0 or 1
 */

int _isupper(int a)
{
	if (a >= 'A' && a <= 'Z')
		return (1);

	else
		return (0);
}
