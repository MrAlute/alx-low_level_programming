#include "main.h"
#include <stdio.h>
/**
 * _isupper - Return 1 if letter is uppercase, 0 if not.
 * @c: char type letter
 * Return: 1 if uppercase, 0 if not uppercase
 */

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
