#include "main.h"

/**
* _islower - just checks if its a small letter, its not slow
* @c: a ASCII value checker
* Return: returns 1 if c is lowercase, returns 0 otherwise
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
