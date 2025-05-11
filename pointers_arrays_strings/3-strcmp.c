#include "main.h"

/**
* _strcmp - compares two strings
* @s1: first string
* @s2: second string
* Return: 0 if s1 & s2 are equal
* positive if s1 > s2 & negative if s2 < s1
*/

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (s1[a] != '\0' && s2[a] != '\0')
	{
		if (s1[a] != s2[a])
		{
			return (s1[a] - s2[a]);
		}

		a++;
	}

	return (s1[a] - s2[a]);
}
