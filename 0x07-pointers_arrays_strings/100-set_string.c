#include "main.h"
/**
 * set_string - sets a value of a pointer to a string
 * @s: pointer to pointer
 * @to: pointer to char
 * Return : void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
