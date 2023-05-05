#include <stdio.h>
#include "main.h"

/**
 * reverse_array -Reverses the content of an array of integers
 * @a: The array
 * @n: The number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int d;

	for (i = 0; i < n--; i++)
	{
		d = a[i];
		a[i] = a[n];
		a[n] = d;
	}
}
