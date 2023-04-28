#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers -Prints the numbers, from 0 to 9 with _putchar
 * Do not print 2 and 4
 * Followed by a new line
 * Return: void .
 */

int void print_most_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
{
	if (i != 2 && i != 4)
		_putchar(i + '0');
}
_putchar("\n");
}
