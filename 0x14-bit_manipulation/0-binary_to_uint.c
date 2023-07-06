#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function to covert binary to unit
 * @b: pointer to 0 and 1 chars
 * Return: converted number, 0 if otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			n = n * 2 + (b[i] - '0');
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (n);
}
