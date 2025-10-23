#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints all single digit numbers of base 10 with putchar
 *
 * Return: Alawys 0 (Sucesse)
 */
int main(void)
{
	char *digit = "0123456789";
	int i = 0;

	while (digit[i] != '\0')
	{
	putchar(digit[i]);
	i++;
	}
	putchar('\n');
	return (0);
}
