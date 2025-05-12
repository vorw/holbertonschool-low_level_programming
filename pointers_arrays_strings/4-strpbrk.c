#include "main.h"

/**
 * _strpbrk - searches string for any set of bytes
 * @s: pointer to string for searching
 * @accept: pointer to the string of accepted bytes
 * Return: pointer to the byte in s that matches one of the bytes in @accept,
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}

		s++;
	}

	return (0);
}
