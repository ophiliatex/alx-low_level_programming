#include <stdio.h>

/**
* main -Entry point
* Return: 0 (success)
*/
int main(void)
{
int d, t, f, m;

for (d = 0; d < 10; d++)
{
for (t = 0; t < 10; t++)
{
for (f = 0; f < 10; f++)
{
for (m = 0; m < 10; m++)
{
if (d < t || (d == t && f < m))
{
putchar(d + '0');
putchar(t + '0');
putchar(' ');
putchar(f + '0');
putchar(m + '0');
if (d != 8 || t != 7 || f != 8 || m != 8)
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}
