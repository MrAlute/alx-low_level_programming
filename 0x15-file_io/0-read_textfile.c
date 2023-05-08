
#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - it is going to read a text file and print it to the posix stdout.
 * @filename: A pointer to the name of the file.
 * @letters: letters.
 *
 * Return: r
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t e, f, r;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	e = open(filename, O_RDONLY);
	f = read(e, buffer, letters);
	r = write(STDOUT_FILENO, buffer, f);

	if (e == -1 || f == -1 || r == -1 || r != f)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(e);

	return (r);
}
