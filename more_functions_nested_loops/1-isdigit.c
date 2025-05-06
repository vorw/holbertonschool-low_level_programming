#include "main.h"

/**
* _isdigit - checks if its a digit
* @c: a random value
* Return: 1 if its a digit, otherwise 0 if its not
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
