#include <stdio.h>
#include <ctype.h>
/**
 * main - Getting a random number andd checking if
 * the number is positive or negative.
 *
 * Return: 0
 */
/* main function */
int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		/*putchar(tolower(x));*/
		int lower_x = tolower(x);

		putchar(lower_x);
	}
	putchar('\n');

	return (0);
}
