#include <stdio.h>
#include "main.h"

/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @index: index
 * @n: pointer to bit
 * Return: 1 otherwise -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int shield = 1;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	shield <<= index;

	*n |= shield;

	return (1);
}
