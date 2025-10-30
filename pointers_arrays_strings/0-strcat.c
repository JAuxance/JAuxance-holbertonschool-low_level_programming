#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to destination string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{

	}

	while (src[j] != '\0')

	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);

}
