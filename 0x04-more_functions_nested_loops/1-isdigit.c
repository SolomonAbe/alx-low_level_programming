#include "main.h"

/**
 * _isdigit - check for digit
 * @c: value to be checked
 * Return: 1 if c is digit else 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
