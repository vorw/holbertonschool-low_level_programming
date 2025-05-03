#include "main.h"

/**
* print_alphabet - prints lower case alphabets
*
* Description: hope this fixes betty style warning..
*/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
