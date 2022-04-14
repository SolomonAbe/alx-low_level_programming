#include "main.h"


/**
 * print_diagonal - draws a diagonal line
 *  * @n: number of times the character \ should be printed
 *
 * Return: null.
 */
void print_diagonal(int n)
{

	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('\\');
	}
	_putchar('\n');
}
