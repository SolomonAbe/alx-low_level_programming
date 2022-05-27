#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: parameter to be passed
 *
 * Return: ALways 0
 */
void print_binary(unsigned long int n)
{
	int b;

	if (n >> 1)
	{
		print_binary(n >> 1);
	}
	b = n & 1;
	_putchar(b + '0');
}
