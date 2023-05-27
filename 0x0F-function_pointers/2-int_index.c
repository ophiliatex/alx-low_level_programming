#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array
 * @size: the number of elements in the array
 * @cmp: a pointer to the function to be used to compare value
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (index < size)
			{
				if (cmp(array[index]))
				return (index);

				index++;
			}
		}
	}

	return (-1);
}
