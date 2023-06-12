#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 * 0 if filename is NULL
 * 0 if write fails or does not write the expected amount of bytes
 * 0 if the file can not be opened or read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t lengthr, lengthw;
char *buffer;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

lengthr = read(fd, buffer, letters);
if (lengthr == -1)
{
free(buffer);
return (0);
}

lengthw = write(STDOUT_FILENO, buffer, lengthr);
if (lengthw == -1 || lengthr != lengthw)
{
free(buffer);
return (0);
}

free(buffer);
close(fd);
return (lengthw);
}