#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: 1 if error, otherwise 0.
 */
int main(int argc, char *argv[])
{
	int sum = 0, argn, i;

	for (i = 1; i < argc; i++)
	{
		argn = atoi(argv[i]);
		if (argn == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += argn;
	}
	printf("%d\n", sum);
	return (0);
}
