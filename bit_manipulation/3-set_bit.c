#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number
 * @index: index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int total_bits = sizeof(unsigned long int) * 8;
	unsigned long int bit_to_set = 1UL << index;

	if (index >= total_bits)
		return (-1);

	*n = *n | bit_to_set;

	return (1);
}
