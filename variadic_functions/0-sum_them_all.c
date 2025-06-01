#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums all parameters
 * @n: num of parameters
 * Return: an int as the sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}

	va_list args;
	va_start(args, n);

	int sum = 0;
	for (unsigned int i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return sum;
}
