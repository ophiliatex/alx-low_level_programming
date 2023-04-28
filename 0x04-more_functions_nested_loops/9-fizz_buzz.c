#include <stdio.h>
#include <stdlib.h>

/**
 * main -Prints the numbers from 1 to 100, followed by a new line
 * Each number or word is separated by a space
 * Return: 0 (success).
*/
int main(void)
{
int i;

for (i = 1; i < 101; i++)
{
if (i % 3 == 0)
{
printf("Fizz");
}
else if (i % 5 == 0)
{
printf("Buzz"); 
}
else if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz");
}
else
{
printf("%d", i);
}
if (i != 100)
{
printf(" ");
}
}
printf("\n");
return (0);
}
