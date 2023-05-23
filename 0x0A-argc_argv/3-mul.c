#include <stdio.h>
#include <stdio.h>
#include "main.h"

/**
 * main - prints the result of multiplying two numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 (success) and 1 on error
 */

int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;

	if (argc == 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		printf("%d\n", num1 * num2);
	}
	else
	{
		printf("Error\n");
		return (10);
	}

	return (0);
}
