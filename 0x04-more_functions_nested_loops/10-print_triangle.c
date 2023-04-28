#include "main.h"

/**
 * print_triangle -Prints a triangle, followed by a new line
 * @size: size of the triangle
 * If size is 0 or less, prints only a new line
 * Return: void
 */
void print_triangle(int size)
{
int i, t, s;

if (size > 0)
{
for (i = 0; i < size; i++)
{
for (t = 0; t < size - i - 1; t++)
{
_putchar(' ');
}
for (s = 0; s < i + 1; s++)
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
