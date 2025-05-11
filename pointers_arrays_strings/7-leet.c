#include "main.h"

/**
* leet - encodes a string into 1337
* @s: string
* Return: pointer to string
*/

char *leet(char *s)
{
	char *leetletters = "aAeEoOtTlL";
	char *leetvalues = "4433007711";
	int a = 0;
	int b = 0;

	while (s[a] != '\0')
	{
		for (b = 0; leetletters[b] != '\0'; b++)
		{
			if (s[a] == leetletters[b])
			{
				s[a] = leetvalues[b];
				break;
			}
		}

		a++;
	}

	return (s);
}
