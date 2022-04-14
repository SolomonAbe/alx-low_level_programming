#include "main.h"

/**
 * _isdigit - check for digit
 * @c: value to be checked
 * Return: 1 if c is digit else 0
 */
int __isdigit(int c)
{
	if(c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
