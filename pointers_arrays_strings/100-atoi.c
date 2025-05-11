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
	int detect = 0;

	while (s[a] != '\0')
	{
		if (s[a] == '-' && !detect)
		{
			sign *= -1;
		}
		
		else if (s[a] >= '0' && s[a] <= '9')
		{
			number = number * 10 + (s[a] - '0');
			detect = 1;
		}

		else if (detect)
		{
			break;
		}

		a++;
	}
	
	return (number * sign);
}
