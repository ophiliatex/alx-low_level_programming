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
	char *p;
	unsigned int i, d;

	i = 0;
	d = 0;

	if (str == NULL)
		return (NULL);

	while (str[d])
		d++;

	p = malloc(sizeof(char) * (d + 1));

	if (p == NULL)
		return (NULL);

	while ((p[i] = str[i]) != '\0')
		i++;

	return (p);
}
