#include <stdio.h>
#include "main.h"

/**
 * print_chessboard -A function that prints the chessboard.
 * @a: An array
 * Return: 0 (success)
 */

void print_chessboard(char (*a)[8])
{
	int index, num;

	for (index = 0; index < 8; index++)
	{
		for (num = 0; num < 8; num++)
			_putchar(a[index][num]);
		_putchar('\n');
	}
}
