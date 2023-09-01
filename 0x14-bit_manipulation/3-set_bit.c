#include "main.h"

/**
* set_bit - sets the value of a bit to 1.
* @n: pointer.
* @index: bit index.
* Return: 1  if it worked, or -1 if an error occurred.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int t;

	if (index > 63)
		return (-1);

	t = 1 << index;
	*n = (*n | t);

	return (1);
}

