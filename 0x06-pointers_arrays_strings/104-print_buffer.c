#include <stdio.h>
#include "main.h"

#include "main.h"
#include <stdio.h>

/**
 * isPrintableASCII - determines if num is a printable ASCII char
 * @num: integer
 * Return: 1 if true, 0 if false
 */
int isPrintableASCII(int num)
{
	return (num >= 32 && num <= 126);
}

/**
 * printHexes - print hex values for string b in formatted form
 * @b: string to print
 * @start: starting position
 * @end: ending position
 */
void printHexes(char *b, int start, int end)
{
	int index = 0;

	while (index < 10)
	{
		if (index < end)
			printf("%02x", *(b + start + index));
		else
			printf("  ");
		if (index % 2)
			printf(" ");
		index++;
	}
}

/**
 * printASCII - print ascii values for string b,
 * formatted to replace nonprintable chars with '.'
 * @b: string to print
 * @start: starting position
 * @end: ending position
 */
void printASCII(char *b, int start, int end)
{
	int charc, index = 0;

	while (index < end)
	{
		charc = *(b + index + start);
		if (!isPrintableASCII(charc))
			charc = 46;
		printf("%c", charc);
		index++;
	}
}

/**
 * print_buffer - prints a buffer
 * @b: string
 * @size: size of buffer
 */
void print_buffer(char *b, int size)
{
	int start, end;

	if (size > 0)
	{
		for (start = 0; start < size; start += 10)
		{
			end = (size - start < 10) ? size - start : 10;
			printf("%08x: ", start);
			printHexes(b, start, end);
			printASCII(b, start, end);
			printf("\n");
		}
	} else
		printf("\n");
}
