#include "main.h"

/**
 * _islower - retuns 1 if c is lowercase otherwise returns 0
 * @c: The character to print
 * Return: 0 for upercase, 1 for lowercase.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
