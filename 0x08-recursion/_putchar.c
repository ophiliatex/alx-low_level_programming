#include <unistd.h>

/**
 * _putchar - print character c to standard output
 * Return: 1(success)
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
