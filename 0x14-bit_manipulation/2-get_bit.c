#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: input for which we retrieve the bit value at a particular index
 * @index: specifies position of bit we want to get
 * Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_num;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	bit_num = ((n >> index) & 1);

	return (bit_num);
}
