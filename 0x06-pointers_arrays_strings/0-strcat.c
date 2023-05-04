#include <stdio.h>
#include "main.h"

/**
 * _strcat -Appends one string to another
 * @dest: Pointer to the destination string
 * @src: Pointer to the source  string
 * Return: A pointer
 */
char *_strcat(char *dest, char *src)
{
	int i, d;

	i = 0;

	while (dest[i] != '\0')
		i++;

	for (d = 0; src[d] != '\0'; d++)
		dest[i + d] = src[d];

	dest[i + d] = '\0';

return (dest);
}
