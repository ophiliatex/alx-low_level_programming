#include "main.h"

/**
 * read_textfile - reads a file and prints the letters
 * @filename: filename.
 * @letters: letters printed.
 *
 * Return: numbers of letters, otherwise 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n, nw;
	char *buff;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);

	n = read(fd, buff, letters);
	nw = write(STDOUT_FILENO, buff, n);

	close(fd);

	free(buff);

	return (nw);
}
