#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Function that frees a
 * 2 dimentional grid previously created
 * @grid: pointer to the grid
 * @height: height of the grid
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int d;

	for (d = 0; d < height; d++)
	{
		free(grid[d]);
	}

	free(grid);
}
