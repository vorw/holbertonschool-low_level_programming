#include <stdio.h>

/**
 * main - main
 * Return: returns 0
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (x % 3 == 0 && x % 5 != 0)
		{
			printf("Fizz");

		}
		else if (x % 5 == 0 && x % 3 != 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", x);
		}
		if (x != 100)
		{
			printf(" ");
		}
	}

	printf("\n");

	return (0);
}
