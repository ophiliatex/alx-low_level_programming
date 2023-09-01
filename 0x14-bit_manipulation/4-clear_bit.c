#include "main.h"

/**
* clear_bit - sets bit to 0.
* @n: pointer.
* @index: bit index.
* Return: 1 if it worked, or -1 if an error occurred.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int t;

	if (index > 63)
		return (-1);

	t = 1 << index;

	if (*n & t)
		*n ^= t;

	return (1);
}

