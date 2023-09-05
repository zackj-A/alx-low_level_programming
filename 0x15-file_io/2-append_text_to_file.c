#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 * @filename: A pointer.
 * @text_content: A string
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	w = write(i, text_content, len);

	if (i == -1 || w == -1)
		return (-1);

	close(i);

	return (1);
}
