#include <stdio.h>
#include "main.h"

/**
 * print_diagonal -Draws a diagonal line on the terminal using _putchar
 * @n: The number of times the character \ should be printed
 * If n is 0 or less, the function should only print a \n
 * Return: void .
 */

void print_diagonal(int n)
{
int i, d;

if (n > 0)
{
for (i = 0; i < n; i++)
{
for (d = 0; d < i; d++)
{
_putchar(' ');
}
_putchar(92);
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
