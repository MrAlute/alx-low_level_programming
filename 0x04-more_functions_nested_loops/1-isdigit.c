#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checking if it is digit or not
 * @c:  int type letter
 * Return: 1 if digit and 0 if not
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
