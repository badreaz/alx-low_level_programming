#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of itself.
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int i, size;
	char *f;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	f = (char *) &main;
	size = atoi(argv[1]);
	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < size; i++)
	{
		printf("%.2hhx", f[i]);
		if (i < (size - 1))
			printf(" ");
	}
	printf("\n");
	return (0);
}
