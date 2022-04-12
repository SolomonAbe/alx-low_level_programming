#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: is number where last digit is to be calculated
 * Return: last digit
 */
int print_last_digit(int n)
{
	int lastD = n % 10;

	if (n < 0)
		lastD = lastD * -1;
	_putchar(lastD + '0');
	return (lastD);
}
