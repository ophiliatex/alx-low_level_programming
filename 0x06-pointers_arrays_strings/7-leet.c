#include <stdio.h>
#include "main.h"

/**
 * leet -Encodes a string into 1337
 * @s: string to encode
 * Return: Pointer to string
 */
char *leet(char *s)
{
int i, d;
char letters[] = "aAeEoOtTlL";
char numbers[] = "4433007711";

for (i = 0; s[i] != '\0'; i++)
{
for (d = 0; letters[d] != '\0'; d++)
{
if (s[i] == letters[d])
s[i] = numbers[d];
}
}

return (s);
}
