#include <stdio.h>

/**
 * main -Entry point prints the lowercase alphabet in reverse,
 * Followed by a new line
 *
 * Return: 0 (Success)
 */

int main(void)

{

	char ap;

	for (ap = 'z'; ap >= 'a'; ap--)

	{

		putchar(ap);

	}

		putchar('\n');

	return (0);

}
