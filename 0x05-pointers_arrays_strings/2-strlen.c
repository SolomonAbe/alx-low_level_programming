#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: argument to be checked
 * Return: lenght of string
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
