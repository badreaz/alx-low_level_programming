#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * not_number - check if their letter in number.
 * @array: pointer to charcater.
 *
 * Return: 0 (sucess) otherwise 1.
 */
int not_number(char *argv[])
{
	unsigned int i = 0;

	for (i = 0; i < strlen(argv[1]); i++)
	{
		if (!(argv[1][i] > 47 && argv[1][i] < 58))
			return (1);
	}
	for (i = 0; i < strlen(argv[2]); i++)
	{
		if (!(argv[2][i] > 47 && argv[2][i] < 58))
			return (1);
	}
	return (0);
}
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

	if (argc != 3 || not_number(argv))
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
