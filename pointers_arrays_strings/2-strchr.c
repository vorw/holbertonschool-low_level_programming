#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates char in string
 * @s: pointer to string
 * @c: char to locate
 * Return: pointer to the first occurrence of c in s, or NULL if not found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		s++;
	}

	if (*s == c)
	{
		return s;
	}

	return (NULL);
}
