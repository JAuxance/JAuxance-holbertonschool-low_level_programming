#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name using a function pointer
 * @name: the name to print
 * @f: function pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
	{
		return;
	}
	if (f == NULL)
	{
		return;
	}
	f(name);
}
