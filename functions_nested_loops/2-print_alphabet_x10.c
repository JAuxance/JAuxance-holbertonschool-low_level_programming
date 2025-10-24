#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times
 *
 * Return: void
 */
void print_alphabet(void)
{
char *alpha = "abcdefghijklmnopqrstuvwxyz";
int i = 0;

while (alpha[i] != '\0')
{
_putchar(alpha[i]);
i++;
}
_putchar('\n');
}
void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
print_alphabet();
}
