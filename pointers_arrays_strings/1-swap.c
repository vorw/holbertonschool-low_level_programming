#include "main.h"

/**
 * swap_int - swaps values of two integers
 * @a: interger one
 * @b: interger two
 */

void swap_int(int *a, int *b)
{
	int olda = *a;

	*a = *b;
	*b = olda;
}
