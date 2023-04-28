#include <stdio.h>
#include "main.h"

/**
 * more_numbers -Prints 10 times the numbers, from 0 to 14
 * Using _putchar
 * Return: void.
 */

void more_numbers(void)
{

int i, d;

for (i = 0; i < 10; i++)
{
for (d = 0; d <= 14; d++)
{
if (d > 9)
_putchar(d / 10 + '0');
_putchar(d % 10 + '0');
}
_putchar('\n');
}
}
