#include <stdio.h>

/**
 * main - print the executablle file name.
 * @argc: words count.
 * @argv: array of the input.
 *
 * Return: 0.
 */
int main(int argc, char **argv)
{
	printf("%s\n", *(argv + argc));
	return (0);
}
