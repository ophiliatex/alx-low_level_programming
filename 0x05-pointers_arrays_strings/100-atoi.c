#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: pointer to a string
 * Return: integer
 */
int _atoi(char *s)
{
unsigned int i = 0, t = 0, f = 0, l = 0, d = 0;
int num[10];

while (s[i] != '\0')
{
if (s[i] == '-')
{
t++;
}
if (s[i] >= '0' && s[i] <= '9')
{
num[f] = s[i] - '0';
f++;
}
if (f > 0 && (s[i] < '0' || s[i] > '9'))
{
break;
}
i++;
}
for (l = 0; l < f; l++)
{
d = d * 10 + num[l];
}
if (t % 2 != 0)
{
d = d * -1;
}
return (d);
}
