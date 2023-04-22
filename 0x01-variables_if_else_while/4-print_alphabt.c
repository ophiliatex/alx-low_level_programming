#include <stdio.h>

/**
 * main -Entry point prints the alphabet in lowercase,
 * followed by a new line, except q and e
 *
 * Return: 0 (Sucess)
 */

int main(void)

{

	char ap = 'a';

	while (ap <= 'z')

	{

		if (ap != 'e' && ap != 'q')

	{

		putchar(ap);

	}

		ap++;

	}

		putchar('\n');

	return (0);

}
