#include "main.h"
#include <stdio.h>

/**
 * main - multiplies two positive numbers.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int mul, num1, num2;
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%d\n", mul);
	return (0);
}
