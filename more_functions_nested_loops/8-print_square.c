#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 * @size: the size of the square
 */

void print_square(int size)
{
	int x;
	int y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
