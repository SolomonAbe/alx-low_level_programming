#include "main.h"

/**
 * fibonacci - calculate fibonacci numbers
 * @n: number to be passed to calculate fibonacci
 * Return: int
 */
int fibonacci(int n)
{
	if (n == 0 || n == 1 || n == 2)
		return (1);
	else
	{
		return (fibonacci(n - 1) + fibonacci(n - 2));
	}
}
