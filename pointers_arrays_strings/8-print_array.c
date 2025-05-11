#include "main.h"
#include <stdio.h>

/**
* print_array - prints n elements of an array of integers
* @a: pointer
* @n: number of elements
*/

void print_array(int *a, int n)
{
	int z;

	for (z = 0; z < n; z++)
	{
		printf("%i", a[z]);

		if (z < n - 1)
		{
			printf(", ");
		}
	}

	printf("\n");
}
