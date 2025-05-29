#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - prints result of simple operations
 * @argc: number of arguments
 * @argv: an array of pointers to the arguments
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, calc;
	char operator;

	if (argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(operator) == NULL || operator[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((operator == '/' && num2 == '0') || (operator == '%' && num2 == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];

	calc = get_op_func(operator)( num1, num2);
	printf("%d\n", calc);

	return (0);
}
