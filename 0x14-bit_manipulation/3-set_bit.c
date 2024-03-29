#include "main.h"

/**
 * set_bit - Sets the value of a bit 1 at a given index
 * @n: a pointer to an unsigned long int variable
 * @index: position of the bit we want to set
 * Return: 1 on success. -1 on failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1 << index);
		return (1);
}
