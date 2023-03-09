#include "main.h"

/**
 * _puts_recursion - printing a line of string
 * @s: string to print
 *
 * Return: 0;
 */

void _puts_recursion(char *s)
{
	if (*s == "\0")
	{
		_putchar("\n");
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
