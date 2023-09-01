#include "main.h"

/**
* binary_to_uint - converts a binary number.
* @b: binary.
* Return: the converted number, or
* 0 if there is one or more chars in the string b that is not 0 or 1
* b is NULL.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int len, t;

	if (!b)
		return (0);

	i = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, t= 1; len >= 0; len--, t *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			i = i + t;
		}
	}

	return (i);
}