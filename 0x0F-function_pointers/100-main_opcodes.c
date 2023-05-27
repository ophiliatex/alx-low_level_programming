#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry: prints the opcodes of its own main function.
 * Usage: ./main number_of_bytes
 *
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int index, bytesnum;
	char *ptr = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytesnum = atoi(argv[1]);
	if (bytesnum < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (index = 0; index < bytesnum; index++)
	{
		printf("%02x", ptr[index] & 0xFF);
		if (index != bytesnum - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
