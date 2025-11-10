#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with
 * a specific char
 * @size: size of the array
 * @c: character to initialize the array with
 * Return: pointer to the array, or NULL if it failss
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *str;

	str = malloc(sizeof(char) * size);

	if (str == NULL)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}

	while (i < size)
	{
		str[i] = c;
		i++;
	}

	return (str);

}
