#include "main.h"

/**
 * _strlen - length of string
 * @str: string to be scanned
 * Return: length of string
 */

int _strlen(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(str + 1));
	}
}

/**
 * _palindrome - checks if string is palindrome
 * @str: string to be checked
 * @start: starting point
 * @end: ending point
 * Return: 1 if str is palindrome. else 0
 */
int _palindrome(char *str, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (str[start] != str[end])
	{
		return (0);
	}
		return (_palindrome(str, start + 1, end - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 * Return: 1 if s is a palindrome, else 0.
 */

int is_palindrome(char *s)
{
	return (_palindrome(s, 0, _strlen(s) - 1));
}
