#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple operations.
 * @argc: size of arguments.
 * @argv: array of arguments.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	if  (!get_op_func(operator))
	{
		printf("Error\n");
		exit(99);
	}
	result = get_op_func(operator)(num1, num2);
	printf("%d\n", result);
	return (0);
}
