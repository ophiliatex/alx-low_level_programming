#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_diagsums -A function that prints the sum 
 * of the two diagonals of a square matrix of integers
 * @a: A pointer
 * Return: 0 (success)
 */

void print_diagsums(int *a, int size)
{
	int index, num, total1 = 0, total2 = 0;
	for (index = 0; index <= (size * size); index = index + size + 1)
		total1 = total1 + a[index];

	for (num = size -1; num <= (size * size) - size; num = num + size - 1)
		total2 = total2 + a[num];
	printf("%d, %d\n", total1, total2);
}
