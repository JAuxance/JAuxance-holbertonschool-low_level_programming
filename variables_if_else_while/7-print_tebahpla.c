#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char *alpha = "abcdefghijklmnopqrstuvwxyz";
int i = 0;

while (alpha[i] != '\0')
i++;
i--;

while (i >= 0)
{
	putchar(alpha[i]);
	i--;
}
putchar('\n');
return (0);
}
