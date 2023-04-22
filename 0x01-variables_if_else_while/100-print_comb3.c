#include <stdio.h>

/**
* main -Entry poin prints all possible different combinations of two digits
*
* Return: 0 (Success)
*/
int main(void)
{
int d, t;

for (d = 0; d < 10; d++)
{
for (t = d + 1; t < 10; t++)
{
putchar(d + '0');
putchar(t + '0');
if (d < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
