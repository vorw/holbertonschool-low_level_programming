#include "main.h"

/**
* reverse_array - reverses content of an array of integers
* @a: pointer to array
* @n: num of elements in array
*/

void reverse_array(int *a, int n)
{
	int z;
	int tmp;

	for (z = 0; z < n / 2; z++)
	{
		tmp = a[z];
		a[z] = a[n - 1 - z];
		a[n - 1 - z] = tmp;
	}
}
