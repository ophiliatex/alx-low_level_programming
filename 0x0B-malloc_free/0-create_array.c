#include "main.h"
#include <stdlib.h>

/**
 * create_array -Creates an array of chars
 * and initializes it with a specific char.
 * @size: The size of the array
 * @c: The char
 * Returns: NULL if size = 0
 * Return: A pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	unsigned int d;
	char *p;

	if (size == 0)
		return (NULL);

	p = malloc(size * sizeof(char));

	if (p == NULL)
		return (NULL);

	for (d = 0; d < size; d++)
	{
		p[d] = c;
	}

	return (p);
}
