#include <stdio.h>
#include <stdlib.h>
/**
 * main - finds and prints the sum of the even-valued terms in the Fibonacci
 * Return: 0 (Success)
 */
int main(void)
{
int i;
unsigned long int p, e, next, sum;
p = 1;
e = 2;
sum = 0;
for (i = 1; i <= 33; ++i)
{
if (p < 4000000 && (p % 2) == 0)
{
sum = sum + p;
}
next = p + e;
p = e;
e = next;
}
printf("%lu\n", sum);
return (0);
}
