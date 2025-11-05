#include "main.h"
/**
 * _sqrt_helper - helper function to find the natural square root
 * @n: number to find the square root of
 * @i: iterator
 * Return: the natural square root of n or -1 if n does not have a natural
 * square root
 */
int _sqrt_helper(int n, int i)

{
	if (i * i > n)
	return (-1);

	if (i * i == n)
	return (i);
	return (_sqrt_helper(n, i + 1));
}
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 0));
}

