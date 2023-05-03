#include <stdio.h>
#include "main.h"

/**
 * print_rev -Function that prints a string, in reverse
 * Followed by a new line
 * @s: pointer to the string
 * Return: void.
 */

void print_rev(char *s)
{
int i = 0;

while (s[i] != '\0')
{
i++;
}
i--;
while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar('\n');
}
