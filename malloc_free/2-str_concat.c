#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: output string
 * @s2: input string
 * Return: returned pointer should point to a newly allocated space in
 * memory which contains the contents of s1, followed by the contents
 * of s2, and null terminated
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	unsigned int i = 0, j = 0, len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len] != '\0')
	{
		len++;
	}
	while (s2[j] != '\0')
	{
		len++;
		j++;
	}
	result = malloc((len + 1) * sizeof(char));

	if (result == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (*s1)
	{
		result[i++] = *s1++;
	}
	while (*s2)
	{
		result[i++] = *s2++;
	}
	result[i] = '\0';

	return (result);
}

