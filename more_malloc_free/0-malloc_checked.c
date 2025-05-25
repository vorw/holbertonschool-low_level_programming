#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - allocates memory
* @b: amount of memory in bytes
* Return: pointer to allocated memory
*/


void *malloc_checked(unsigned int b)
{
	void *a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}

	return (a);
}
