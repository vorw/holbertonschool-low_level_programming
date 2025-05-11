#include "main.h"

/**
* _strncpy - copies string up to n bytes
* @dest: dest buffer
* @src: source string
* @n: num of bytes
* Return: pointer to string dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
