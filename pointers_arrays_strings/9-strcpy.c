#include "main.h"

/**
* _strcpy - copies string from src to dest including '/0'
* @dest: destination buffer
* @src: source string
*
* Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		src[a] = dest[a];
		a++;
	}

	dest[a] = '\0';

	return (dest);
}
