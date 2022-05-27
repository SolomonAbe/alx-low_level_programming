#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: paramter 1
 * @index: parameter 2
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	b = (sizeof(*(n)) * 8);
	if (index < b)
	{
		*(n) = ((1 << index) | *(n));
		return (1);
	}
	return (-1);
}
