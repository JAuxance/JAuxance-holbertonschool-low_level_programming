#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - prints its name
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	{
		(void)argc;
		int i = 0;

		while (argv[0][i] != '\0')
		{
			_putchar(argv[0][i]);
			i++;
		}
		_putchar('\n');
	}
		return (0);
}
