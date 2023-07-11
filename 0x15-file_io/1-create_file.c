#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: pointer to file name
 * @text_content: pointer to string to write
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */

int create_file(const char *filename, char *text_content)
{
	int fd, wrt, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(fd, text_content, len);

	if (fd == -1 || wrt == -1)
		return (-1);

	close(fd);

	return (1);
}
