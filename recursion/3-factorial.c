#include "main.h"

/**
 * factorial - returns factorial of given number
 * @n: number
 * Return: factorial of given number, otherwise -1
 */

int factorial(int n)
{
	if (n < 1)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (1);
	}

	else
	{
		return (n * factorial(n - 1));
	}
}
