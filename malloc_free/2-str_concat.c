#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *  str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	char *copy;
	int len = 0;
	int len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len] != 0)
	{
		len++;
	}
	while (s2[len2] != 0)
	{
		len2++;
	}
	copy = malloc(sizeof(char) * (len + len2 + 1));
	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		copy[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		copy[j + i] = s2[j];
	}
	copy[i + j] = '\0';
	return (copy);
}
