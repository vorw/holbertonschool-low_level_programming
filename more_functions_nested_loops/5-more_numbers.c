#include "main.h"

/**
* more_numbers - repeats printing the number from 0 to 14
*/

void more_numbers(void)
{
	char c;
	int x;

	for (c = '0'; c <= '9'; c++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x <= 9)
			{
			_putchar(x + '0');
			}
			else
			{
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
