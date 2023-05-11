#include "main.h"

/**
 * _puts_recursion - prints a string in reverse, followed by a new line.
 * @s: string to be printed
 * Retrun: void.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
