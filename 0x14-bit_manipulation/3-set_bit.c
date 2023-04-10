#include "main.h"

/**
 * set_bit - this is to set the value of a bit at a given index to 1.
 * @n: A pointer to the bit.
 * @index: index value.
 *
 * Return: error of -1 or 1 for success.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
