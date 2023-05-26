#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - adds all it's parameters
 * @n: parameter count
 * Return: 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list memb;
	unsigned int index;
	int sum = 0;

	if (n == 0)
	return (0);

	va_start(memb, n);

	for (index = 0; index < n; index++)
	{
		sum += va_arg(memb, int);
	}

	va_end(memb);
	return (sum);
}
