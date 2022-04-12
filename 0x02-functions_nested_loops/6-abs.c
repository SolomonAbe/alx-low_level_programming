#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: is number where absolute values is to be calculated
 * Return: int
 */
int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
