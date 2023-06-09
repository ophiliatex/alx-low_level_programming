#include <stdio.h>
#include "main.h"

/**
* print_binary -  prints the binary representation of a number.
* @n: number in consideration
* Return: void
*/

void print_binary(unsigned long int n)
{
unsigned long int shield = 1;
int i = 0;

shield <<= (sizeof(unsigned long int) * 8 - 1);

if (!n)
{
_putchar('0');
return;
}

while (shield)
{
if (n & shield)
i = 1;

if (i)
(n & shield) ? _putchar('1') : _putchar('0');

shield >>= 1;
}
}
