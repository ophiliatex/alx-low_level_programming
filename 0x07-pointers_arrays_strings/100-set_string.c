#include <stdio.h>
#include "main.h"

/**
 * set_string - function that sets the value of a pointer to a char
 * @s: A pointer to a pointer
 * @to: A pointer
 * Return: 0 (success)
 */

void set_string(char **s, char *to)
{
	*s = to;
}
