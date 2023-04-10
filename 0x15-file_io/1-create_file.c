#include "main.h"

/**
 * create_file - this will create a file.
 * @filename: pointer to the name of the file to create.
 * @text_content: pointer to a string to write to the file.
 *
 * Return:-1 if failure occurs, otherwise return 1.
 */

int create_file(const char *filename, char *text_content)
{
	int q, r, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	q = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	r = write(q, text_content, length);

	if (q == -1 || r == -1)
		return (-1);

	close(q);

	return (1);
}
