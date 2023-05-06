#include <stdio.h>
#include "main.h"

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of the buffer
 */
void print_buffer(char *b, int size)
{
int i, a, c, d = 0;

if (size <= 0)
printf("\n");
else
{
while (i < size)
{
printf("%08x: ", i);
a = 0;
while (a < 10)
{
if (i + a < size)
printf("%02x", b[i + a]);
else
printf("  ");
if (a % 2 != 0)
printf(" ");
a++;
}
printf("; ");
c = 0;
while (c < 10)
{
if (i + c < size)
{
d = b[i + c];
if (d >= 32 && d <= 126)
printf("%c", d);
else
printf(".");
}
else
printf(" ");
c++;
}
printf("\n");
i += 10;
}
}
}
