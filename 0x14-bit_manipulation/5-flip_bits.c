#include <stdio.h>
#include "main.h"

/**
 * flip_bits -  returns the number of bits you would
 *  need to flip to get from one number to another.
 *  @n: index
 *  @m: bit
 *  Return: 0
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int shield = 1;
	unsigned int counter = 0;

	shield <<= (sizeof(unsigned long int) * 8 - 1);
	while (shield)
	{
		if ((n & shield) != (m & shield))
			counter++;

		shield >>= 1;
	}

	return (counter);
}
