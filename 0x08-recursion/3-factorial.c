#include <stdio.h>
#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The integer
 * Return: -1 if n is lower than 0 to indicate an error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
