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
	int i, d;

	while (dest[i] != '\0')
		i++;

	for (d = 0; d < n && src[d] != '\0'; d++)
		dest[i + d] = src[d];

	dest[i + d] = '\0';

	return (dest);
}
