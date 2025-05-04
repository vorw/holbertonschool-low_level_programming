#include "main.h"

/**
* print_last_digit - prints last digit of number
* @n: number
*
* Return: last digit of number
*/

int print_last_digit(int n)
{
	int lastdigit;

	lastdigit = n % 10;

	if (n < 0)
	{
		lastdigit = -lastdigit;
		_putchar(lastdigit + '0');
	}

	else
	{
		_putchar(lastdigit + '0');
	}

	return (lastdigit);
}
