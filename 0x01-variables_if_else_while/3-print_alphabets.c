#include <stdio.h>

/**
 * main -Entry point prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 *
 * Return: 0 (Success)
 */

int main(void)

{

	int ap;

	for (ap = 'a'; ap <= 'z'; ap++)

	putchar(ap);

	for (ap = 'A'; ap <= 'Z'; ap++)

	putchar(ap);

	putchar('\n');

	return (0);

}
