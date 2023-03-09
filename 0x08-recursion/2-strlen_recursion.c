#include "main.h"

/**
 * _strlen_recursion - return length os a string
 * @s: string to return the length
 *
 * Return: s;
 */

int _strlen_recursion(char *s)
{
	if (s == "\0")
	{
		return;
	}

	s++;
	_strlen_recursion(s) + 1;

	return (s);
}
