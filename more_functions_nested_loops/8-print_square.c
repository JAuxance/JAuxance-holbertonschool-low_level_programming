#include "main.h"
/**
 * print_square - draws a square line in the terminal
 * @n: number of times the character _ should be printed
 * Return: void
 */
void print_square(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
return;
}
for (i = 0; i < n; i++)
{
_putchar('#');
_putchar('\n');
}
}
