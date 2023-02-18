#include <stdio.h>
#include <ctype.h>
/**
 * main - printing a to z in both capital and small letter.
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
	for (int x = 'A'; x <= 'Z'; x++)
	{
		putchar (x);
	}
	putchar('\n');

	return (0);
}

