#include <stdio.h>
#include "main.h"

/**
 * _strspn -A function that gets the length of a prefix substring
 * @s: input
 * @accept: input
 * Return: 0 (success)
 */
 
unsigned int _strspn(char *s, char *accept)
{
	unsigned i, d, digit, check;

	digit = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;

		for (d = 0; accept[d] != '\0'; d++)
		{
			if (accept[d] == s[i])
			{
				digit++;
				check = 1;
			}
		}
		
		if (check == 0)
			return (digit);
	}
	return (digit);
}
