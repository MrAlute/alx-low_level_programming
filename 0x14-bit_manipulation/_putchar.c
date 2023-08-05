#include "main.h"
#include <unistd.h>

/**
 * _putchar - it will write the character c to stdout
 * @c: These is the  character to print out
 *
 * Return: 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
