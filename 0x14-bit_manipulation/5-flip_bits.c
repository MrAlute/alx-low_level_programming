#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to be
 *             flipped to get from one number to another.
 * @n: number.
 * @m: number to flip n to.
 *
 * Return: The necessary number of bits to flip to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m, bits = 0;

	while (a > 0)
	{
		bits += (a & 1);
		a >>= 1;
	}

	return (bits);
}
