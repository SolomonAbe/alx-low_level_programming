#include "main.h"

/**
 * _puts - function that print string followed by new line
 * @str: argument to be checked
 * Return: null
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		i++;
		str++;
	}
	_putchar('\n');
}
