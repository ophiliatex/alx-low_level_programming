#include <stdio.h>
#include "main.h"

/**
 * puts2 -Function that prints every other character of a string
 * Starting with the first characte followed by a new line
 * @str: pointer to the string
 * Return: void
 */

void puts2(char *str)
{
int i = 0;

while (str[i] != '\0')
{
if (i % 2 == 0)
_putchar(str[i]);
i++;
}
_putchar('\n');
}
