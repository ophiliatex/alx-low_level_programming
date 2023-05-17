#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: the string
 * Return: pointer to the duplicated str
 */

char *_strdup(char *str)
{
	unsigned int t = 0, d = 1;
	char *p;

	if (str == NULL)
		return (NULL);

	while (str[d])
	{
		d++;
	}

	p = malloc((sizeof(char) * d) + 1);

	if (p == NULL)
		return (NULL);

	while (t < d)
	{
		p[t] = str[t];
		t++;
	}
	
	p[t] = '\n';
	return (p);
}
