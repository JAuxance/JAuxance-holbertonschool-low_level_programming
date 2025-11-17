#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for an integer in an array using a comparison function
 * @array: the array of integers
 * @size: the size of the array
 * @cmp: function pointer to the comparison function
 * Return: the index of the first element for which cmp returns 1,
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL)
	{
		return (-1);
	}
	if (cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	while (i < size)
	{
		if (cmp(array[i]) == 1)
		{
			return (i);
			i++;
		}
	}

	return (-1);
}
