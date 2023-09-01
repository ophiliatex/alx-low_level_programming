#include "main.h"

/**
* flip_bits - returns number of bits to flip from one number to another
* @n: number one.
* @m: number two.
* Return: number of bits.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int t;

	for (t = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			t++;
	}

	return (t);
}

