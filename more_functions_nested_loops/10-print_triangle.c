#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int row;
	int space;
	int hashtags;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (row = 1; row <= size; row++)
		{
			for (space = size - row; space > 0; space--)
			{
				_putchar(' ');
			}

			for (hashtags = 1; hashtags <= row; hashtags++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
