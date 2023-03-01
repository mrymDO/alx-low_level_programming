#include "main.h"
/**
 * string_toupper - change lowercase of to uppercase
 * @str: string
 * Return: string
 */

char *string_toupper(char *str)
{
	int i;
	int delt = 'a' - 'A';

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a'  && str[i] <= 'z')
		str[i] -= delt;

		i++;
	}
	return (str);
}

