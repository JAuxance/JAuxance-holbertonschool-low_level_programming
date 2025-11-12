#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: a pointer to the duplicated string, or NULL if insufficient memory
 */
char *_strdup(char *str)
{
	char *dest;
	int i;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	dest = malloc(sizeof(char) * (len + 1));

	if (dest == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		dest[i] = str[i];
	}
	dest[i] = '\0';
	return (dest);
}
