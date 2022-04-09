#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, j = 1, k = 2;

	while (i < 8)
	{
		for (j = 1 ; j < 10 ; j++)
		{
			for (k = 2 ; k < 10 ; k++)
			{
				if (i < j)
				{
					putchar(48 + i);
					putchar(48 + j);
					putchar(48 + k);
					if (i != 7 || j != 8 || k != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
