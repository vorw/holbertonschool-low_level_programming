#include "main.h"
#include <stdio.h>

/**
* print_to_98 - prints all natural numbers from n to 98
* @n: starting number
*/

void print_to_98(int n)
{
	while (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%i", n);
			if (n != 98)
			{
				printf(", ");
			}
			else
			{
				for (; n >= 98; n--)
				{
					printf("%i", n);
					if (n != 98)
					{
						printf(", ");
					}
				}
			}
		}
	}

	printf("\n");
}
