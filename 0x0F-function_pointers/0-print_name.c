#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: a pointer to a character array that contains the name to be printed
 * @f: function pointer that points to a function
 * that takes a pointer to a character array as its argument and return void
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
	(*f)(name);
}
