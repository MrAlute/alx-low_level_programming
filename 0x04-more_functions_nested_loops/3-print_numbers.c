#include "main.h"

/**
 * print_numbers - print number 0 to 9
 *Desciption: you can only use _putchar  twice
 */

void print_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}

