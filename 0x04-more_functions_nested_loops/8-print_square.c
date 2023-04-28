#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square using _putchar
 * @size: size of the square
 * Return: void
 */
void print_square(int size)
{
int i, d;

if (size > 0)
{
for (i = 0; i < size; i++)
{
for (d = 0; d < size; d++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
