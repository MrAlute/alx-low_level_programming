#include "main.h"

/**
 * _pow_recursion - return value of x raised to power y
 * @x: first number
 * @y: second number
 *
 * Return: 0 or -1;
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
