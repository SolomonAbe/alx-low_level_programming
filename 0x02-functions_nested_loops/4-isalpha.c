#include "main.h"

/**
 * _isalpha - retuns 1 if c is lowercase or uppercase otherwise returns 0
 * @c: The character to print
 * Return: 0 for other, 1 for letter.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
