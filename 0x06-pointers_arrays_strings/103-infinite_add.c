#include <stdio.h>
#include "main.h"

/**
 * infinite_add -Adds two numbers
 * @n1: First number
 * @n2: Second number
 * @r: buffer that the function will use to store the result
 * @size_r: buffer size
 * Return: Pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i, a, b, c, d, e, f, g, h, remain;

i = a = b = c = d = e = f = g = h = remain = 0;
while (n1[i] != '\0')
i++;
while (n2[a] != '\0')
a++;
if (i > size_r || a > size_r)
return (0);
i--;
a--;
while (i >= 0 || a >= 0)
{
b = (i >= 0) ? n1[i] - '0' : 0;
c = (a >= 0) ? n2[a] - '0' : 0;
d = b + c + remain;
e = d % 10;
f = d / 10;
r[g] = e + '0';
remain = f;
g++;
i--;
a--;
}
if (remain > 0)
{
if (g >= size_r)
return (0);
r[g] = remain+ '0';
g++;
}
r[g] = '\0';
for (h = 0; h < g / 2; h++)
{
b = r[h];
r[h] = r[g - h - 1];
r[g - h - 1] = b;
}
return (r);
}
