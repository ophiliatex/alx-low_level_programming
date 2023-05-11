#include <stdio.h>
#include "main.h"

int _sqr(int n, int index);

/**
 * _sqr - checkes for natural square root
 * @index: Iterator
 * @n: The number being calculated
 * Return: The natural square root.
 */

int _sqr(int n, int index)
{
	int sqr = index * index;

	if (sqr > n)
		return (-1);

	if (sqr == n)
		return (index);

	return (_sqr(n, index + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number
 * Return: -1 If n does not have a natural square root.
 */

int _sqrt_recursion(int n)
{
	return (_sqr(n, 1));
}
