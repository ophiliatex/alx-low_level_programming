#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - A function that concatenates
 * all the agrs of a program
 * @ac: the argument count
 * @av: The argument vector
 * Returns: A pointer to a new string or NULL
 */

char *argstostr(int ac, char **av)
{
	int chr = 0, d = 0, e = 0, f = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (d < ac)
	{
		while (av[d][e])
		{
			chr++;
			e++;
		}

		e = 0;
		d++;
	}

	p = malloc((sizeof(char) * chr) + ac + 1);

	d = 0;
	while (av[d])
	{
		while (av[d][e])
		{
			p[f] = av[d][e];
			f++;
			e++;
		}

		p[f] = '\n';

		e = 0;
		f++;
		d++;
	}

	f++;
	p[f] = '\0';
	return (p);
}
