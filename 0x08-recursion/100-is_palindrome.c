#include <stdio.h>
#include"main.h"

/**
 * length - checker for the lenght of @s
 * @s: string to be checked
 * Return: 0
 */

int length(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + length(s + 1));
}

/**
 * checker -Compares each charactor of the string.
 * @s: the string
 * @n1: least iterator
 * @n2: largest iterator
 * Return: 0
 */

int checker(char *s, int n1, int n2)
{
	if (*(s + n1) == *(s + n2))
	{
		if (n1 == n2 || n1 == n2 + 1)
			return (1);
		return (0 + checker(s, n1 + 1, n2 - 1));
	}

	return (0);
}

/**
 * is_palindrome - checks for palindrome string.
 * @s: The string
 * Return: 1 if @s is a palindrome and 0 if otherwise
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	return (checker(s, 0, length(s) - 1));
}
