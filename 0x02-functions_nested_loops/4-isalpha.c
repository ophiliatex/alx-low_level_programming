#include "main.h"

/**
* _isalpha -Entry checks if a character is a letter
* @c: character being check
* Return: 1 if c is a letter, 0 if otherwise
*/
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
