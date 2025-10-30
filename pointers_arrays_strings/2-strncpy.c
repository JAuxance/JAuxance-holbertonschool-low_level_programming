#include "main.h"
/**
 * _strncpy - concatenates two strings
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to concatenate from src
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

		while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}

	return (dest);
}
