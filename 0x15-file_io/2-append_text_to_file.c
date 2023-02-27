#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file
 * @filename: incoming argument for name of the file to be created
 * @text_content: incoming argument for a NULL'd string to write to filename
 *
 * Return: 1 on success, otherwise -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int lettItr;
	int wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (lettItr = 0; text_content[lettItr]; lettItr++)
			;

		wr = write(fd, text_content, lettItr);

		if (wr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
