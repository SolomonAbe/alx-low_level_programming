#include "main.h"

/**
 * print_sign - print sign of a number
 * @c: The number to be checked to print sign
 * Return: 1 if n is greater than zero, 0 is n is zero
 * , -1 is returned if n is less than zero.
 */
int print_sign(int c)
{
	if (c > 0)
	{
		return (1);
	}
	else if (c < 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
