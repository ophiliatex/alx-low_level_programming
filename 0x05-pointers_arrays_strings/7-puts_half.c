#include <stdio.h>
#include "main.h"

/**
 * puts_half -Function that prints half of a sting
 * @str: pointer to the string
 * Return: void.
 */

void puts_half(char *str)
{
int i = 0, t = 0;

while (str[i] != '\0')
{
i++;
}
if (i % 2 == 0)
{
t = i / 2;
}
else
{
t = (i + 1) / 2;
}
while (t < i)
{
_putchar(str[t]);
t++;
}
_putchar('\n');
}
