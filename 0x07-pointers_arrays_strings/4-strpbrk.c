#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: input string
 * @accept: input string
 * Return: a point to the byte s or NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	int index, num;

	for (index = 0; s[index] != '\0'; index++)
	{
		for (num = 0; accept[num] != '\0'; num++)
		{
			if (s[index] == accept[num])
				return (s + index);
		}
	}

	return (NULL);
}
