#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: a list of types of arguments passed
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list anything;
	unsigned int index = 0, d, t = 0;
	char *strg;
	const char arg[] = "cifs";

	va_start(anything, format);
	while (format && format[index])
	{
		d = 0;
		while (arg[d])
		{
			if (format[index] == arg[d] && t)
			{
				printf(", ");
				break;
			} d++;
		}
		switch (format[index])
		{
			case 'c':
				printf("%c", va_arg(anything, int)), t = 1;
				break;
			case 'i':
				printf("%d", va_arg(anything, int)), t = 1;
				break;
			case 'f':
				printf("%f", va_arg(anything, double)), t = 1;
				break;
			case 's':
				strg = va_arg(anything, char *), t = 1;
				if (!strg)
				{
					printf("(nil)");
					break;
				}
				printf("%s", strg);
				break;
		} index++;
	}
	printf("\n"), va_end(anything);
}
