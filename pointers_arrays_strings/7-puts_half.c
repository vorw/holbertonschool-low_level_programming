#include "main.h"

/**
* puts_half - prints second half of string
* @str: string
*/

void puts_half(char *str)
{
	int a = 0;
	int new;

	while (str[a] != '\0')
	{
		a++;
	}

	if (a % 2 == 0)
	{
		new = a / 2;
	}

	else
	{
		new = (a + 1) / 2;
	}

	while (str[new] != '\0')
	{
		_putchar(str[new]);
		new++;
	}

	_putchar('\n');
}
