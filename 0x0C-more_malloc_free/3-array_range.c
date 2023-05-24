#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * array_range - create an array of integers(int)
 * @min: minimum int
 * @max: maximum int
 * Return: the pointer to the array
 */

int *array_range(int min, int max)
{
	int *p, index = 0;

	if (min > max)
		return (NULL);

	p = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (p == NULL)
		return (NULL);

	while (min <= max)
	{
		p[index] = min;
		index++;
		min++;
	}

	return (p);
}
