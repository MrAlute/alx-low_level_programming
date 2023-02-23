#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 * Description: you can only use _putchar twice
 */

void print_most_numbers(void)
{
	int a  = 0;

	while (a <= 9)
	{
		if (a != 4 && c != 2)
			_putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
