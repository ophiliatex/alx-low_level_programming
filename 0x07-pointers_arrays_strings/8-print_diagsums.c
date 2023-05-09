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
int index, total1, total2;

total1 = 0;
total2 = 0;
for (index = 0; index < size; index++)
{
total1 = total1 + a[index * (size + 1)];
total2 = total2 + a[(index + 1) * (size - 1)];
}
printf("%d, %d\n", total1, total2);
}
