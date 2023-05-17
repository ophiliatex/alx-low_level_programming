#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - A function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: array width
 * @height: array height
 * Return: a pointer to array otherwis, NULL
 */

int **alloc_grid(int width, int height)
{
	int d, e, f, g;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
	{
		free(p);
		return (NULL);
	}

	for (d = 0; d < height; d++)
	{p[d] = malloc(sizeof(int) * width);
		if (p[d] == NULL)
		{
			for (e = d; e >= 0; e--)
			{
				free(p[e]);
			}

			free(p);
			return (NULL);
		}
	}

	for (f = 0; f < height; f++)
	{
		for (g = 0; g < width; g++)
		{
			p[f][g] = 0;
		}
	}
	return (p);
}
