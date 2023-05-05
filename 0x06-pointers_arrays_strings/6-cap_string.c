#include <stdio.h>
#include "main.h"

/**
 * cap_string -Capitalizes all words of a string
 * @s: String to be changed.
 * Return: A pointer
 */

char *cap_string(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
if (i == 0)
s[i] -= 32;
else if (s[i - 1] == ' ' || s[i - 1] == '\t' ||
s[i - 1] == '\n' || s[i - 1] == ',' ||
s[i - 1] == ';' || s[i - 1] == '.' ||
s[i - 1] == '!' || s[i - 1] == '?' ||
s[i - 1] == '"' || s[i - 1] == '(' ||
s[i - 1] == ')' || s[i - 1] == '{' ||
s[i - 1] == '}')
s[i] -= 32;
}
}

return (s);
}
