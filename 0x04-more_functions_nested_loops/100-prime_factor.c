#include <stdio.h>
#include <stdlib.h>

/**
 * main -Prints the largest prime factor of the number 612852475143
 * Followed by a new line
 * Return: 0 (success).
 */
int main(void)
{
long int i, num;

num = 612852475143;
for (i = 2; i < num; i++)
{
if (num % i == 0)
{
num = num / i;
i = 1;
}
}
printf("%ld\n", num);
return (0);
}
