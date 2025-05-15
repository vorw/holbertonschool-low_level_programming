#include "main.h"

/**
 * _pow_recursion - returns the power of two nums
 * @x: first num
 * @y: second num
 * Return: the power of two nums, otherwise -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
