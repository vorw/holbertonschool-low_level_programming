#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: number
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int bit = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int started = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	while (bit > 0)
	{
		if ((n & bit) != 0)
		{
			putchar('1');
			started = 1;
		}

		else if (started)
		{
			putchar('0');
		}

		bit = bit >> 1;
	}
}
