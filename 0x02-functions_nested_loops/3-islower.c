#include "main.h"

/**
* _islower -Entry checks for lowercase character.
* @c: The character to being checked.
* Return: 1 if c is lowercase, 0 if otherwise.
*/
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
