#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: parameter 1 to be passed
 * @index: parameter 2 to be passed 
 *
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int b;

	b = (sizeof(n) * 8);
	if (index < b)
	{
		return (((1 << index) & n) >> index);
	}
	return (-1);
}
