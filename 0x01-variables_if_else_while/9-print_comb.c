#include <stdio.h>

/**
 * main -Entry point prints all possible combinations of single-digit numbers
 *
 * Return: 0 (Success)
 */

int main(void)

{

	int num;

	for (num = 33; num < 65; num++)

	{

		putchar(num);

	if (num != 63)

	{

		putchar(',');

	}

	}

		putchar('\n');

	return (0);
}
