#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - main
 * @argc: argc
 * @argv: argv
 * Return: betty
 */

int main(int argc, char *argv[])
{
	int firstnum;
	int secnum;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		firstnum = atoi(argv[1]);
		secnum = atoi(argv[2]);
		result = firstnum * secnum;
		printf("%i\n", result);

		return (0);
	}
}
