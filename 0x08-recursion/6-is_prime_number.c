#include "main.h"

/**
 * prime_checker - check recursively the input
 * @n: number to check
 * @i: iterator
 * Return: 1 if n is prime. else return 0
 */
int prime_checker(int n, int i)
{
	if (i == 1)
		return (1);
	if ((n % i == 0) && i > 0)
		return (0);
	return (prime_checker(n, i - 1));
}
/**
 * is_prime_number - check if input is a primer number
 * @n: input
 * Return: 1 if input is prime number. else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (prime_checker(n, n - 1));
}

