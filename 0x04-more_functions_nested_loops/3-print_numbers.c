#include "main.h"

/**
 * print_numbers - print number from 0 to 9
 *  
 * Return: always 0
 */
void print_numbers(void)
{
	int i = 0;
	unsigned int n1 = 0;
	
	for ( i = 0; i < 10; i++)
	{
		if (i < 0)
		{
			n1 = -i;
			_putchar('-');
		}
		else
		{
			n1 = i;
		}
		if (n1 / 10)
		{
			n1 = n1 /10;
		}
		else
		{
			_putchar((n1 % 10) + '0');
		}
	}
	_putchar('\n');
}
