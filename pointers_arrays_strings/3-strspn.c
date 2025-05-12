#include "main.h"

/**
 * _strspn - get len of prefix substring
 * @s: pointer to string for searching
 * @accept: Pointer to string of accepted chars
 * Return: num of bytes in initial segment of s,
 * which consist only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int matching;
	int i;

	while (*s)
	{
		matching = 0;

		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				matching = 1;
				break;
			}
		}

		if (!matching)
		{
			break;
		}

		a++;
		s++;
	}

	return (a);
}
