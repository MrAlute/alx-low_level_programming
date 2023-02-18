#include <stdio.h>
#include <ctype.h>
/**
 * main - printing a to z except letter q and e.
 *
 * Return: 0
 */
/* main function */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
