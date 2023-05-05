#include <stdio.h>
#include "main.h"

/**
 * rot13 -Encodes a string using rot13
 * @s: String to encode
 * Return: Pointer to string
 */
char *rot13(char *s)
{
int i, d;
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char numbers[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
for (d = 0; letters[d] != '\0'; d++)
{
if (s[i] == letters[d])
{
s[i] = numbers[d];
break;
}
}
}

return (s);
}
