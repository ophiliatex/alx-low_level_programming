#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -G enerates random valid passwords for the program 101-crackme
 * Return: 0 (success)
 */
int main(void)
{
char password[84];
int index = 0, sum = 0, dif;

srand(time(0));
while (sum < (2772 - 122))
{
password[index] = 33 + rand() % 94;
sum += password[index];
index++;
}
dif = 2772 - sum;
password[index] = dif;
password[index + 1] = '\0';
printf("%s", password);
return (0);
}
