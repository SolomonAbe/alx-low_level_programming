#include <stdio.h>

/**
 * program that print the first Fibonacci series
 */
int main()
{
	int n = 50, first = 0, second = 1, next, c;

	for (c = 0; c < n; c++)
	{
		if (c <= 1)
			next = 1;
		else
		{
			next = first + second;
			first = second;
			second = next;
    		}
    		printf("%d ,", next);
  	}
	printf("\n");
	return 0;
}
