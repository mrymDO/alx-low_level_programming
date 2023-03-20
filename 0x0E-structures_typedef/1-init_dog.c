#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: a pointer to struct dog variable
 * @name: pointer to string of character, name dog
 * @age: age of the dog
 * owner: pointer to a string of char, name fo dog's owner
 */
int _strlen(char *s);

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int i;

	(*d).name = malloc(_strlen(name));

	if ((*d).name == NULL)
		return;

	for (i = 0; name[i]; i++)
		(*d).name[i] = name[i];
	(*d).name[i] = '\0';

	(*d).age = age;

	(*d).owner = malloc(_strlen(owner));

	if ((*d).owner == NULL)
		return;

	for (i = 0; owner[i]; i++)
		(*d).owner[i] = owner[i];
	(*d).owner[i] = owner[i];
}
/**
 * _strlen: calculate lenght of a string
 * @s: string of character
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i]; i++)
		count++;

	return (count + 1);
}

