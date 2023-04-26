#include <stdio.h>
/**
 * main - fibonacci <3
 *
 * Purpose - no hardcode
 *
 * Return:  (Success)
 */
int main(void)
{
unsigned long int i;
unsigned long int bef = 1;
unsigned long int aft = 2;
unsigned long int l = 1000000000;
unsigned long int befr1;
unsigned long int befr2;
unsigned long int aftr1;
unsigned long int aftr2;
printf("%lu", befr);
for (i = 1; i < 91; i++)
{
printf(", %lu", aftr);
aft += befr;
bef = aft - befr;
}
befr1 = (befr / l);
befr2 = (befr % l);
aftr1 = (aftr / l);
aftr2 = (aftr % l);
for (i = 92; i < 99; ++i)
{
printf(", %lu", aftr1 + (aftr2 / l));
printf("%lu", aftr2 % l);
aftr1 = aftr1 + befr1;
befr1 = aftr1 - befr1;
aftr2 = aftr2 + befr2;
bef2 = aftr2 - befr2;
}
printf("\n");
return (0);
}
