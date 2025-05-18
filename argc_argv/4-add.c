#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_positive_number - checks if positive
 * @str: string
 * Return: 1 if positive, 0 otherwise
 */

int is_positive_number(char *str)
{
	int i = 0;

	if (str[0] == '\0')
	{
		return (0);
	}

	while (str[i])
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
		i++;
	}

	return (1);
}

/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: 1 didnt work, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!is_positive_number(argv[i]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[i]);
	}

	printf("%i\n", sum);
	return (0);
}
