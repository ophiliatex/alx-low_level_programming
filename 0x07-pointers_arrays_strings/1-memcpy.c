#include <stdio.h>
#include "main.h"

/**
 * _memcpy -A function that copies memory
 * @dest: A pointer to the destination of @n in memory
 * @src: A pointer to the source in memory @n is copied
 * @n: Number of byte to be copied
 * Return: A pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
