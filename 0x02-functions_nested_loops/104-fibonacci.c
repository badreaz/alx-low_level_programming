#include <stdio.h>

/**
 * main - prints the first 98 fibonacci number.
 *
 * Return: 0
 */
int main(void)
{
	int i;
	double fnum;
	double lnum;
	double new;

	for (i = 1; i < 98; i++)
	{
		if (i == 1)
		{
			printf("1, 2");
			fnum = 1;
			lnum = 2;
		}
		else
		{
			new = fnum + lnum;
			printf(", %lf", new);
			fnum = lnum;
			lnum = new;
		}
	}
	printf('\n');

	return (0);
}
