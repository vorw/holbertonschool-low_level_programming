#include "main.h"

/**
* cap_string - capitalizes all words of string
* @s: string
* Return: string
*/

char *cap_string(char *s)
{
	char x[] = " \t\n,;.!?\"(){}";
	int a = 0;
	int b;

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= 32;
	}

	while (s[a])
	{
		for (b = 0; x[b]; b++)
		{
			if (s[a] == x[b] && s[a + 1] >= 'a' && s[a + 1] <= 'z')
			{
				s[a + 1] -= 32;
			}
		}

		a++;
	}

	return (s);
}
