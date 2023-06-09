#include <stdio.h>
#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: given bit
 * @index: given index
 * Return: value of bit otherwise, -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int shield = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	shield <<= index;

	if (n & shield)
		return (1);

	return (0);
}
