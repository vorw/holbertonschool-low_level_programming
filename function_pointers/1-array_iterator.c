#include "function_pointers.h"

/**
 * array_iterator - executes a function given as parameter 
 * on each element of an array
 * @array: array
 * @size: size of array
 * @action: pointer to function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t sizee = 0;

	for (; sizee < size; sizee++)
	{
		action(array[sizee]);
	}
}
