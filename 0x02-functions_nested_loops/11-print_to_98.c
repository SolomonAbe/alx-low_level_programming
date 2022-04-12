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
		for (; n < 98; n++)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else if (n > 98)
	{
		for (; n > 98; n--)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	if (n == 98)
	{
		_putchar('\n');
	}
}
