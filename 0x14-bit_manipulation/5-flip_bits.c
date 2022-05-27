#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need to flip to get from one number to another.
 * @n: parameter 1
 * @m: parameter 2
 *
 * Return: number of bits you would need to flip to get from one number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0, newNum = 0;

	i = n ^ m;
	while (i)
	{
		if (i & 1)
			newNum++;
		i = i >> 1;
	}
	return (newNum);
}
