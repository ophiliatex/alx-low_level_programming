#include <stdio.h>
#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: the number
 * Return: the converted number, 0 if otherwise
 */

void print_binary(unsigned long int n)
{
	int i, counter = 0;
	unsigned long int t;

	for (i = 63; i >= 0; i--)
	{
		t = n >> i;

		if (t & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}

	if (!counter)
		_putchar('0');
}

