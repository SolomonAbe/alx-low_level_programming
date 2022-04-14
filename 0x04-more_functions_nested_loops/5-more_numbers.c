#include "main.h"

/**
 * more_numbers - print 10 times the numbers
 * 
 * Return: always 0
 */
void more_numbers(void)
{
	int i, j, k, r;
	
	i = 0;
	r = 0;
	while (i < 10)
	{
		while (r <= 14)
		{
			if (r < 10)
			{
				k = r;
			}
			else
			{
				j = r / 10;
				k = r % 10;
				_putchar(j + '0');
			}
			_putchar(k + '0');
			r++
		}
		i++;
		r = 0;
	}
	_putchar('\n');
}
