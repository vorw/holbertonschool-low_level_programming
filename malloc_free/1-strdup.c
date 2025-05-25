#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns pointer to newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: input string
 * Return: pointer to the duplicated string
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *duplicated;
	unsigned int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	duplicated = malloc((len + 1) * sizeof(char));

	if (duplicated == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		duplicated[i] = str[i];
	}

	duplicated[len] = '\0';

	return (duplicated);
}
