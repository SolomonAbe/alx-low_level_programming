#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, j = 1, k = 0;

	while (i < 10)
	{
		for (j = 0 ; j < 10 ; j++)
		{
			if (i < j)
			{
				for (k = 0 ; k < 10 ; k++)
				{
					putchar(48 + i);
					putchar(48 + j);
					putchar(' ');
					putchar(48 + j);
					putchar(48 + k);
					if (i != 8 || j != 9)
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
