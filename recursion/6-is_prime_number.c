#include "main.h"

/**
 * check_prime - checker
 * @n: number 1
 * @i: number 2
 * Return: prime number
 */

int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}

	if (i * i > n)
	{

		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}

	else
	{
		return (check_prime(n, i + 1));
	}
}

/**
 * is_prime_number - check if n is divisible by any divisor
 * @n: number
 * Return: prime number
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
