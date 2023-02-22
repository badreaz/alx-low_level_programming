#include <stdio.h>

/**
 * main - prints even numbers of fibonacci numbers.
 *
 * Return: 0
 */
int main(void)
{
	long int i;
	long long int fnum;
	long long int lnum;
	long long int new;

	for (i = 1, i < 4000000; i++)
	{
		if (i == 1)
		{
			printf("2");
			fnum = 1;
			lnum = 2;
		}
		else
		{
			new = fnum + lnum;
			if (new % 2 == 0)
			{
				printf(", %lld", new);
			}
			fnum = lnum;
			lnum = new;
		}
	}
	printf("\n");

	return (0);
}
