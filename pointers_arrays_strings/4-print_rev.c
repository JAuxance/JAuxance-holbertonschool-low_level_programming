#include "main.h"
#include <stddef.h>
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: string to print in reverse
 * Return: voids
 */
void print_rev(char *s)
{
	int i = 0;

	if (s == NULL)
	return;

	while (s[i] != '\0')
		i++;

	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}