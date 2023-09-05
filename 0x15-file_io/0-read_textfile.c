#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- a function that reads text file and print it
 * @filename: text file
 * @letters: number of letters
 * Return: z- actual number of bytes
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t z;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	z = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (z);
}
