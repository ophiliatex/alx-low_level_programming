#include <stdio.h>
#include "main.h"

/**
 * infinite_add -Adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: buffer that the function will use to store the result
 * @size_r: Buffer size
 * Return: Pointer
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, a, k, l, x, w;

	for (i = 0; n1[i]; i++)
		;
	for (a = 0; n2[a]; a++)
		;
	if (i > size_r || a > size_r)
		return (0);
	x = 0;
	for (i -= 1, a -= 1, k = 0; k < size_r - 1; i--, a--, k++)
	{
		w = x;
		if (i >= 0)
			w += n1[i] - '0';
		if (a >= 0)
			w += n2[a] - '0';
		if (i < 0 && a < 0 && w == 0)
		{
			break;
		}
		x = w / 10;
		r[k] = w % 10 + '0';
	}
	r[k] = '\0';
	if (i >= 0 || a >= 0 || x)
		return (0);
	for (k -= 1, l = 0; l < k; k--, l++)
	{
		x = r[k];
		r[k] = r[l];
		r[l] = x;
	}
	return (r);

}
