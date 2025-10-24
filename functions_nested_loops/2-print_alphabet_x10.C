#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Description: This function prints the lowercase alphabet 10 times,
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
