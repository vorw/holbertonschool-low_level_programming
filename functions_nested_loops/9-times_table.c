#include "main.h"

/**
* times_table - times table
* Description: Write a function that prints the 9 times table, starting with 0
* Return: betty style
*/

void times_table(void)
{
	int a, b, x;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			x = a * b;

			if (b == 0)
			{
				_putchar(x + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');

				if (x < 10)
				{
					_putchar(' ');
					_putchar(x + '0');
				}
				else
				{
					_putchar((x / 10) + '0');
					_putchar((x % 10) + '0');
				}
			}
		}
		_putchar('\n');
	}
}
