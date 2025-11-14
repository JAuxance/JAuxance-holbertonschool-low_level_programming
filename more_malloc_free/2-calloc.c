#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of each element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total = nmemb * size;
	char *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(total);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (i < total)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
