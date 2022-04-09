#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0, j = 1;

	while (i < 10)
	{
		for (j = 1 ; j < 10 ; j++)
		{
			putchar(48 + i);
			putchar(48 + i);
			putchar(' ');
			putchar(48 + j);
			putchar(48 + j);
			if (i != 8 || j != 9)
			{
			putchar(',');
			putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
