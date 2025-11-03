#include "main.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to locate
 * Return: pointer to beginning of located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j = 0;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (haystack[i] != '\0')
	{
		j = 0;

			if (haystack[i] == needle[j])
		{
			while (haystack[i + j] == needle[j] && needle[j] != '\0')
			{
				j++;
			}
			if (needle[j] == '\0')
			{
				return (&haystack[i]);
			}

		}

		i++;
	}
	return (NULL);
}
