#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number to be passed to get statring point *
 * Return: 0
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
		{
			_putchar(n + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (n = n; n > 98; n--)
		{
			_putchar(n + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar(n);
	_putchar('\n');
}
