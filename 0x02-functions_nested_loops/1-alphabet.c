#include "main.h"

/** progarm that preints alphabets in lower case
 * 
 * Retrun: 0 always
 * */
void print_alphabet(void)
{
	char c;
	
	for ( c = 'a' ; c <= 'z' ; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
