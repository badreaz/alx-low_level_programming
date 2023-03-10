#include <stdio.h>

/**
 * main - prints the number of arguments passed to.
 * @argc: number og arguments.
 * @argv: pointer to arguments.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	argc--;
	printf("%d\n", argc);
	argv[0] = 0;
	return (0);
}
