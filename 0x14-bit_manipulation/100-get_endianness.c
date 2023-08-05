#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: 0.
 */

int get_endianness(void)
{
	int number = 1;
	char *n = (char *)&number;

	if (*n == 1)
		return (1);

	return (0);
}
