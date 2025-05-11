#include "main.h"

/**
* string_toupper - changes all lowercase letters of string to uppercase
* @str: string
* Return: Pointer to string
*/

char *string_toupper(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
			str[a] = str[a] - 32;
		}

		a++;
	}

	return (str);
}
