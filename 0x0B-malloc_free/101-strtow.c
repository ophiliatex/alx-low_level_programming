#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int word_lenght(char *str);
int word_count(char *str);
char **strtow(char *str);

/**
 * word_lenght - finds the index at the end of the first word within a string
 * @str: string to be searched
 * Return: a pointer
 */

int word_lenght(char *str)
{
	int index = 0, lenght = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		lenght++;
		index++;
	}

	return (lenght);
}

/**
 * word_count - counts number of words within a string
 * @str: the string
 * Return: word_count value
 */
int word_count(char *str)
{
	int index = 0, word = 0, lenght = 0;

	for (index = 0; *(str + index); index++)
		lenght++;

	for (index = 0; index < lenght; index++)
	{
		if (*(str + index) != ' ')
		{
			word++;
			index += word_lenght(str + index);
		}
	}

	return (word);
}

/**
 * strtow - A fuction that splits a string into words
 * @str: string to split
 * Return: A pointer to an array of strings
 */
char **strtow(char *str)
{
	char **strings;
	int index = 0, word, words, letter, lenght;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	word = word_count(str);
	if (word == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (word + 1));
	if (strings == NULL)
		return (NULL);

	for (words = 0; words < word; words++)
	{
		while (str[index] == ' ')
			index++;

		letter = word_lenght(str + index);

		strings[words] = malloc(sizeof(char) * (letter + 1));

		if (strings[words] == NULL)
		{
			for (; words >= 0; words--)
				free(strings[words]);

			free(strings);
			return (NULL);
		}

		for (lenght = 0; lenght < letter; lenght++)
			strings[words][lenght] = str[index++];
		strings[words][lenght] = '\0';
	}
	strings[words] = NULL;

	return (strings);
}
