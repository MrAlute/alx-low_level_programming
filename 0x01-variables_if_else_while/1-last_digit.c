#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - Getting a random number andd checking if
 * the number is positive or negative.
 *
 * Return: 0
 */
/* main function */
int main(void)
{
	int n, k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	k = n % 10;
	if (k > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, k);
	} else if (k == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, k);
	} else if (k < 6 && k != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, k);
	}
	return (0);
}
