#include <stdio.h>
#include "main.h"

/**
 * _memset -A function fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @n: number of byte of the memory area
 * @s: pointer to @n
 * @b: constant byte
 * Return: a pointer to the memory area s
 */


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;

	}

	return (s);
}
