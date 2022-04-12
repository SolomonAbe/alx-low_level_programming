#include <stdio.h>

/** function prototype */
int _putchar(char c);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = '_putchar';
	_putchar (ch);

	return (0);
}
/** function definition */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
