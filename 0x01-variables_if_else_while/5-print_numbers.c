#include <stdio.h>

/**
 * main - print the single decimal numbers.
 *
 * Return: 0
 */
int main(void)
{
	int num;

	num = 0;
	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
