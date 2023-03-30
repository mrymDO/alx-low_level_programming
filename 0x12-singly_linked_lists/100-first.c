#include <stdio.h>

/**
 * called_before_main - function that will automatically called
 * before main is executed
 * Return: void
 */

void __attribute__((constructor)) called_before_main()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
