#include "main.h"

/**
* rev_string - reverses a string
* @s: string
*/

void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	char tmp;

	while (s[a] != '\0')
	{
		a++;
	}

	a--;

	while (b < a)
	{
		tmp = s[b];
		s[b] = s[a];
		s[a] = tmp;
		b++;
		a--;
	}
}
