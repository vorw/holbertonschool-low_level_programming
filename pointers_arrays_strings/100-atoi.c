#include "main.h"

/**
* _atoi - converts string to integer
* @s: string
* Return: converted integer
*/

int _atoi(char *s)
{
	int a = 0;
	int number = 0;
	int sign = 1;

	while (s[a] == ' ')
	{
		a++;
	}

	if (s[a] == '-' || s[a] == '+')
	{
		if (s[a] == '-')
		{
			sign = -1;
			a++;
		}
	}

	while (s[a] >= '0' && s[a] <= '9')
	{
		number = number * 10 + (s[a] - '0');
		a++;
	}

	return (number * sign);
}
