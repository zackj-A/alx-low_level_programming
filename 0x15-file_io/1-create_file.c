#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: A pointer
 * @text_content: A pointer
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, k, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	k = write(fd, text_content, len);

	if (fd == -1 || k == -1)
		return (-1);

	close(fd);

	return (1);
}
