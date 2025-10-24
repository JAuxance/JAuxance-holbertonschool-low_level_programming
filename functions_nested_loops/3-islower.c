#include "main.h"
int _islower(int c)
/**
 * _islower - checks for lowercase character
 *
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
