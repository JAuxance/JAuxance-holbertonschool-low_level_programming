#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	unsigned int count = 0;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
	{
			if (s[i] == accept[j])
		{
			break;
		}
	}
			if (accept[j] == '\0')
			return (count);

			count++;
			i++;
	}
		return (count);
	}
