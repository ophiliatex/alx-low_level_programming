#include <stdio.h>

/**
* main - prints all possible different combinations of three digits
* Return: 0
*/
int main(void)
{
int d, t, f;

for (d = 0; d < 10; d++)
{
for (t = d + 1; t < 10; t++)
{
for (f = t + 1; f < 10; f++)
{
putchar(d + '0');
putchar(t + '0');
putchar(f + '0');
if (d != 7 || t != 8 || f != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
