#include <stdio.h>
#include "main.h"

/**
 * _strncat -Concatenates two strings.
 * @src: Source string
 * @dest: Destination string
 * @n: number of bytes to be used from @src
 * Return: Pointer to @dest.
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, d = 0;

while (dest[i++])
d++;

for (i = 0; src[i] && i < n; i++)
	dest[d++] = src[i];

return (dest);
}
