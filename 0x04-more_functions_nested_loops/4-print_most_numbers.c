#include "main.h"

/**
 * print_most_numbers - prints numbers except 2 and 4
 * Description: you can only use _putchar twice
 */

void print_most_numbers(void)
{
	int a;

	a  = 0;

	while (a < 10)
	{
		if (a != 2 && a != 4)
			_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
