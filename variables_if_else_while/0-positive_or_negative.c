#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: programe qui dit quand le nombre aléatoire de la variable et positif ou négatif
 *
 * Return: Alawys 0 (Sucesse)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if(n > 0)
{
printf("is positive\n");
}
if(n == 0)
{
printf("is zero\n");
}
if(n < 0)
{
printf("is negative\n");
}

	return (0);
}
