#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 * Description: A program that prints the name of the file it was compiled from
 * Return: void
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
