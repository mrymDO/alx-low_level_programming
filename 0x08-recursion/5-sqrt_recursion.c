#include "main.h"
/**
 * checker - checks the input
 * @n: number to be compared
 * @b: number to check
 * Return: natural square root of num
 */
int checker(int n, int b)
{
	if (n * n == b)
		return (n);
	if (n * n > b)
		return (-1);
	return (checker(n + 1, b));
}

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: input
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{

	return (checker(1, n));

}
