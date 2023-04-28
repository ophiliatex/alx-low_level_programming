#include "main.h"
#include <stdio.h>

/**
 * _isupper -Checks for upeercase character
 * @c: The character to be checked
 * Return: 1 if the characcter is uppercase and 0 if otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
