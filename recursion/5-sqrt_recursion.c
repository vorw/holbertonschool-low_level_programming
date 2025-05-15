#include "main.h"

/**
 * find_sqrt - helps
 * @n: number 1
 * @m: number 2
 * Return: natural square root, otherwise -1 if its not a n.s.r
 */

int find_sqrt(int n, int m)
{
	if (m * m == n)
	{
		return (m);
	}

	if (m * m > n)
	{
		return (-1);
	}

	else
	{
		return (find_sqrt(n, m + 1));
	}
}

/**
 * _sqrt_recursion - take a given number
 * @n: number 1
 * Return: natural square root, otherwise -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else
	{
		return (find_sqrt(n, 0));
	}
}
