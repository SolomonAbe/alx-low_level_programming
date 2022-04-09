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
		for (j = 0 ;j < 10; j++)
		{
			putchar(48 + i);
			putchar(48 + j);
			if (i != 9)
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
