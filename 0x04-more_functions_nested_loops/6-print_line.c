#include "main.h"

/**
 * print_line - draw a staight line
 * @n: number of times the character _ printed
 *
 * Return: null.
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
