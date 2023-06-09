#include <stdio.h>
#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @index: index of bit
 * @n: bit
 * Return: 1 otherwise -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int shield = 1;

if (index > sizeof(unsigned long int) * 8 - 1)
return (-1);

shield <<= index;

*n &= ~shield;

return (1);
}
