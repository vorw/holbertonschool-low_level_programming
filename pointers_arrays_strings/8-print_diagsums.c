#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of two diagonals of square matrix of integers
 * @a: pointer
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int firstsum = 0;
	int secondsum = 0;

	for (i = 0; i < size; i++)
	{
		firstsum += a[i * size + i];
		secondsum += a[i * size + (size - 1 - i)];
	}

	printf("%i, %i\n", firstsum, secondsum);
}
