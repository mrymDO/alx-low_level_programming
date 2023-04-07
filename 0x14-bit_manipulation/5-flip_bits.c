#include "main.h"

/**
 * flip_bits - returns number of bits that are different between n and m
 * @n: unsigned long int input1
 * @m: unsigned long int input2
 * Return: number of bits needs to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int count = 0;

	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if ((n ^ m) & 1)
			count++;

		n >>= 1;
		m >>= 1;
	}
	return (count);
}
