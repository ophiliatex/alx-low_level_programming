#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int numb1, numb2;
	char *opts;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	numb1 = atoi(argv[1]);
	numb2 = atoi(argv[3]);
	opts = argv[2];

	if (get_op_func(opts) == NULL || opts[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*opts == 47 || *opts == 37) && numb2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(opts)(numb1, numb2));

	return (0);
}
