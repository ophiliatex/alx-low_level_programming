#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to alloate
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	void *point;

	point = malloc(b);

	if (point == NULL)
		exit(98);

	return (point);
}
