#include <stdio.h>
#include "main.h"

/**
 * *_strncpy -Copies a string
 * @dest: Pointer to the destination of the string
 * @src: Pointer to the source of the string
 * @n: Number of byte to be used
 * Result: Pointer to @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
			i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}


