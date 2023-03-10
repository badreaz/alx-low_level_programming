#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the minimum nuber of coins to make change for an
 * amount of money.
 * @argc: number of int.
 * @argv: array to number.
 *
 * Return: 1 if error, otherwise 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;
	unsigned int num = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (argv[1][0] == 45)
	{
		printf("0\n");
		return (0);
	}
	while (num > 0)
	{
		if (num >= 25)
			num -= 25;

		else if (num >= 10)
			num -= 10;

		else if (num >= 5)
			num -= 5;

		else if (num >= 2)
			num -= 2;

		else
			num--;

		i++;
	}
	printf("%d\n", i);
	return (0);
}
