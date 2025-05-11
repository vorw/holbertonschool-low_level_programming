#include "main.h"

/**
* _strncat - concatenates two strings
* @dest: dest string
* @src: source string
* @n: max num of bytes from src
* Return: pointer to dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a] = '\0';
	return (dest);
}
