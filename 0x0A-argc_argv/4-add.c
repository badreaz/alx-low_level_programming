#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - adds positive numbers.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: 1 if error, otherwise 0.
 */
int main(int argc, char *argv[])
{
	int sum = 0, argn, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		argn = atoi(argv[i]);
		sum += argn;
	}

	printf("%d\n", sum);
	return (0);
}
