#include <stdio.h>
#include "main.h"

/**
 * rev_string -Function that reverses a string
 * @s: pointer to the string
 * Return: void
 */

void rev_string(char *s)
{
int i = 0, t = 0;
char temp;

while (s[i] != '\0')
{
i++;
}
i--;
while (i > t)
{
temp = s[i];
s[i] = s[t];
s[t] = temp;
i--;
t++;
}
}
