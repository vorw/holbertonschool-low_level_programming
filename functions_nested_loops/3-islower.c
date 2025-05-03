#include "main.h"

/**
* _islower - wasn't named cause of the definition of slow.. it just checks if its a small letter
*
* Description: betty style work again, please
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
