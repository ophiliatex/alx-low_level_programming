#include <stdio.h>
#include "main.h"
#include <stdlib.h>


/**
 * _realloc - allocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: size of memory
 * @new_size: size of memory
 * Return: a pointer
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *npoint;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		npoint = malloc(new_size);

		if (npoint == NULL)
			return (NULL);

		return (npoint);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}

	npoint = malloc(new_size);

	if (npoint == NULL)
		return (NULL);

	for (index = 0; index < old_size && index < new_size; index++)
	{
		npoint[index] = ((char *) ptr)[index];
	}

	free(ptr);
	return (npoint);
}
