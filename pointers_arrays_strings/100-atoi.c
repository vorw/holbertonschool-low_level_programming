#include "main.h"

/**
* _atoi - converts string to integer
* @s: string
* Return: converted integer
*/

int _atoi(char *s)
{
	int sign = 1;
	unsigned int result = 0;
	int a = 0;

	while (s[a] != '\0' && (s[a] < '0' || s[a] > '9'))
	{
		if (s[a] == '-')
		{
			sign *= -1;
		}
		a++;
	}

	while (s[a] != '\0' && s[a] >= '0' && s[a] <= '9')
	{
		result = result * 10 + (s[a] - '0');
		a++;
	}

	return (sign * result);
}
