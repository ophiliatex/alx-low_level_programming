#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory using malloc
 * @nmemb: number of elements of the array
 * @size: size of memory in bytes
 * Return: a pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0, b = 0;
	char *point;

	if (nmemb == 0 || size == 0)
		return (NULL);

	b = nmemb * size;
	point = malloc(b);

	if (point == NULL)
		return (NULL);

	while (a < b)
	{
		point[a] = 0;
		a++;
	}

	return (point);
}
