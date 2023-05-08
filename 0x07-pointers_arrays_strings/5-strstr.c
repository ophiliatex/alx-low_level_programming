#include <stdio.h>
#include "main.h"

/**
 * _strstr -Function that locates a substring.
 * @needle: substring
 * @haystack: ths string
 * Return: A pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *first = haystack;
		char *second = needle;

		while (*first == *second && *second != '\0')
		{
			first++;
			second++;
		}

		if (*second == '\0')
			return (haystack);
	}

	return (NULL);
}
