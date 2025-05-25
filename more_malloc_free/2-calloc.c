#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for array and sets to zero
 * @nmemb: num of elements
 * @size: size of each element
 * Return: pointer to allocated memory, or NULL on failure
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, total;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total = nmemb * size;
	ptr = malloc(total);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < total; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
