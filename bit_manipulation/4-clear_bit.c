#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number
 * @index: index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int total_bits = sizeof(unsigned long int) * 8;
	unsigned long int value = 1;
	unsigned int i;

	if (index >= total_bits)
		return (-1);

	for (i = 0; i < index; i++)
		value = value * 2;

	if (((*n / value) % 2) == 1)
		*n = *n - value;

	return (1);
}
