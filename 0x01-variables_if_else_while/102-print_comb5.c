#include <stdio.h>

/**
 * main -Entry point
 * Return: 0(success
 */

int main(void)

{
int m, n;

for (m = 0; n <= 98; n++)
{

for (m = n + 1; m <= 99; m++)
{
putchar((m / 10) + '0');
putchar((m % 10) + '0');
putchar(' ');
putchar((n / 10) + '0');
putchar((n % 10) + '0');
if (m == 98 && n == 99)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
