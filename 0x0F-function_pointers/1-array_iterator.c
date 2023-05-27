#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on each element of an array.
 * @array: array
 * @size_t: size 0f elenents
 * @action: action pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index = 0;
	{
		if (array != NULL && action != NULL && size > 0)
		{
			while (index < size)
			{
				action(array[index]);
				index++;
			}
		}
	}
}
