#include <stdio.h>
#include "main.h"

/**
 * _puts -Prints a string followed by a new line stdout
 * @str: Pointer to a the String
 * Retrun: void.
 */

void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
