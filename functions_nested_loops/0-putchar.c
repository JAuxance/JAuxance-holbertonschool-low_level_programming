#include <unistd.h>
/**
 * _putchar - écrit un caractère sur la sortie standard
 * @c: caractère à afficher
 *
 * Return: 1 si succès, -1 si erreur et errno est défini
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * main - Entry point
 *
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}
