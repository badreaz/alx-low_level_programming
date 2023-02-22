#include <stdio.h>

/**
 * main - prints the first 50 fibonacci number.
 *
 * Return: 0
 */
int main(void)
{
	int i;
	long int fnum;
	long int lnum;
	long int tmp;

	for (i = 1; i < 50; i++)
	{
		if (i == 1)
		{
			printf("1, 2");
			fnum = 1;
			lnum = 2;
		}
		else
		{
			printf(", %ld", fnum + lnum);
			tmp = fnum;
			fnum = lnum;
			lnum = tmp + lnum;
		}
	}
	printf("\n");

	return (0);
}
