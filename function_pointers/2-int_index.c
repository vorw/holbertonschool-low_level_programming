#include "function_pointers.h"

/**
 * int_index - searches for integer in an array of integers
 * @array: array
 * @size: size
 * @cmp: pointer to the function to be used to compare values
 * Return: If no element matches or size <= 0 return -1
 * or return the index of the first element for which
 * the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int sizee = 0;

	if (size <= 0)
	{
		return (-1);
	}

	if (!array || !cmp)
	{
		return (-1);
	}

	for (; sizee < size; sizee++)
	{
		if (cmp(array[sizee]) == 1)
		{
			return (sizee);
		}
	}

	return (-1);
}
