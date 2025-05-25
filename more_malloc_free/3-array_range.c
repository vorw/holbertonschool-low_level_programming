#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the new array, or NULL on failure
 */

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc((max - min + 1) * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; min <= max; i++, min++)
	{
		arr[i] = min;
	}

	return (arr);
}
