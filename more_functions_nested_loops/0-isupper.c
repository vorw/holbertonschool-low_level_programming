#include "main.h"

/**
* _isupper - a function that checks for uppercase character
* @c: character
* Return: 1 if upper, 0 if lower
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
