#include <stdio.h>

/**
 * main - prints the first 50 fibonacci number.
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int fnum;
	int lnum;

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
			printf(", %d", fnum + lnum);
			fnum = lnum;
			lnum = fnum + lnum;
		}
	}
	printf("\n");

	return (0);
}
