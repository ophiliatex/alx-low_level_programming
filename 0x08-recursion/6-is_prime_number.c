#include <stdio.h>
#include "main.h"

int prime(int num, int index);

/**
 * prime - checks if num is a prime
 * @num: value to be checked
 * @index: Iterator.
 * Return: 1 if prime
 */

int prime(int num, int index)
{
	if (num <= 1)
		return (0);

	if (num % index == 0 && index > 1)
		return (0);

	if ((num / index) < index)
		return (1);

	return (prime(num, index + 1));
}

/**
 * is_prime_number - Returns 1 if the input integer is a prime number,
 * @n: Input integer
 * Return: 1 if prime, otherwise 0
 */

int is_prime_number(int n)
{
	return (prime(n, 1));
}
