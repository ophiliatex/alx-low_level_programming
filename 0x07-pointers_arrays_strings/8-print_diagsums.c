#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - A function that prints the sum 
 * of the two diagonals of a square matrix of integers
 * @a: A pointer
 * @size: input
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int index, num, sum1 = 0, sum2 = 0;
	
	for (index = 0; index <= (size * size); index = index + size + 1)
		sum1 = sum1 + a[index];

	for (num = size - 1; num <= (size * size) - size; num = num + size - 1)
		sum2 = sum2 + a[num];
	printf("%d, %d\n", total1, total2);
}
