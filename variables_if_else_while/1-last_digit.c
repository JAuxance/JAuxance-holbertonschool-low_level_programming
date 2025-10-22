#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: programe qui dit quand le nombre aléatoire de la f
 *
 * Return: Alawys 0 (Sucesse)
 */
int main(void)
{
int n;
int last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;
{
printf("Last digit of %d is %d", last_digit, n);
}
if (last_digit > 5)
{
printf("and is greater than");
}
if (last_digit == 0)
{
printf ("and is 0");
}
if (last_digit < 6 && last_digit < 0)
{
printf ("and is less than 6 and not 0");
}
return (0);
}