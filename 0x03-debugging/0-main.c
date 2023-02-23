#include "main.h"

/* more headers goes there */
/**
 * positive_or_negative - Getting a number and checking if
 * the number is positive or negative.
 * @i:int type letter
 * Return: 0
 */

/* main - function */
void positive_or_negative(int i)
{
	int n;

	n = 0;

	if (n < 0)
	{
		printf("%d is negative\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
		printf("%d is positive\n", n);
	return (0);
}
