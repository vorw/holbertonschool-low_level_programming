#include "main.h"

/**
 * _strlen - prints length of string
 * @s: pointer s
 * Return: returns length of given string
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
