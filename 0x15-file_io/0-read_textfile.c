#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: name of the text file
 * @letters: letters to be read
 * Return: actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd, w, txt;

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buff = malloc(sizeof(char) * letters);
	txt = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, txt);

	free(buff);
	close(fd);
	return (w);
}
