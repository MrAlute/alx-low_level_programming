#include "main.h"
#include <stdio.h>

/* more headers goes there */
/**
 * positive_or_negative - Getting a number and checking if
 * the number is positive or negative.
 * @i:int type letter
 */

/* main - function */
void positive_or_negative(int i)
{
	i = 0;

	if (i < 0)
	{
		printf("%d is negative\n", i);
	} else if (i == 0)
	{
		printf("%d is zero\n", i);
	} else
		printf("%d is positive\n", i);
}
