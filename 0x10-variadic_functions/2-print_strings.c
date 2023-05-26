#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strgs;
	unsigned int index;
	char *strg;

	va_start(strgs, n);
	for (index = 0; index < n; index++)
	{
		strg = va_arg(strgs, char *);
		if (strg == NULL)
			printf("(nil)");
		else 
			printf("%s", strg);
		if (index < n -1 && separator != NULL)
			printf("%s", separator);
	}
			printf("\n");
			va_end(strgs);
}
