#include "main.h"

/**
 * binary_to_uint - this is to convert a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: num.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int length;

	if (b == '\0')
		return (0);

	for (length = 0; b[length];)
		length++;

	for (length -= 1; length >= 0; length--)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		num += (b[length] - '0') * mult;
		mult *= 2;
	}

	return (num);
}
