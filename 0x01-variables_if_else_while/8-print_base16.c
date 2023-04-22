#include <stdio.h>

/**
 * main -Entry point prints all the numbers of base 16 in lowercase,
 *
 * Return: 0 (Success)
 */

int main(void)

{

	int a;

	char ap;

	for (a = 48; a < 58; a++)

	{

		putchar(a);

	}

	for (ap = 'a'; ap <= 'f'; ap++)

	{

	putchar(ap);

	}

	putchar('\n');

	return (0);

}
