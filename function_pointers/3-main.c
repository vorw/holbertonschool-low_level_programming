#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include <string.h>

/**
 * main - prints result of simple operations
 * @argc: number of arguments
 * @argv: an array of pointers to the arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, calc;
	int (*op_func)(int, int);

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	op_func = get_op_func(argv[2]);
	if (op_func == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	if ((argv[2][0] == '/' && num2 == 0) || (argv[2][0] == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	calc = op_func(num1, num2);
	printf("%d\n", calc);

	return (0);
}
