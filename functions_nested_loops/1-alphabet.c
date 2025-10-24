#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase
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
