#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

fd_from = open_from(argv[1]);
fd_to = open_to(argv[2]);

copy_file(fd_from, fd_to);

if (close(fd_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
exit(100);
}

if (close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
exit(100);
}

return (0);
}

/**
 * open_from - opens a file
 * @file: name of file to be opened
 *
 * Return: file descriptor
 */
int open_from(char *file)
{
int fd;

fd = open(file, O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
exit(98);
}

return (fd);
}

/**
 * open_to - opens a file
 * @file: name of file to be opened
 *
 * Return: file descriptor
 */
int open_to(char *file)
{
int fd;

fd = open(file, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
exit(99);
}

return (fd);
}

/**
 * copy_file - copies a file
 * @fd_from: file descriptor to copy from
 * @fd_to: file descriptor to copy to
 */
void copy_file(int fd_from, int fd_to)
{
int r, w;
char buf[1024];

while ((r = read(fd_from, buf, 1024)) > 0)
{
w = write(fd_to, buf, r);
if (w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %d\n", fd_to);
exit(99);
}
}

if (r == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %d\n", fd_from);
exit(98);
}
}
