#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int index;
	unsigned int d, sum = 0;
	char *t;

	if (argc > 1)
	{
		for (index = 1; index < argc; index++)
		{
			t = argv[index];

			for (d = 0; d < strlen(t); d++)
			{
				if (t[d] < 48 || t[d] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(t);
			t++;
		}

		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
