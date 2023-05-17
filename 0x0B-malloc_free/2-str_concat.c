#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * Return: pointed to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int d = 0, e = 0, f = 0, g = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[d])
		d++;

	while (s2[e])
		e++;

	g = d + e;
	p = malloc((sizeof(char) * g) + 1);

	if (p == NULL)
		return (NULL);

	e = 0;

	while (f < g)
	{
		if (f <= d)
			p[f] = s1[f];

		if (f >= d)
		{
			p[f] = s2[e];
			e++;
		}

		f++;
	}

	p[f] = '\0';
	return (p);
}
