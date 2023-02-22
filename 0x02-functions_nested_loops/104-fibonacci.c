#include <stdio.h>

/**
 * main - prints the first 98 fibonacci number.
 *
 * Return: 0
 */
int main(void)
{
	unsigned long i, new, new2, fnum, lnum;
	unsigned long fnum1, fnum2, lnum1, lnum2;

	for (i = 1; i < 91; i++)
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
			printf(", %lu", new);
			fnum = lnum;
			lnum = new;
		}
	}
	fnum1 = fnum / 10000000000;
	lnum1 = lnum / 10000000000;
	fnum2 = fnum % 10000000000;
	lnum2 = lnum % 10000000000;
	for (i = 91; i < 98; i++)
	{
		new = fnum1 + lnum1;
		new2 = fnum2 + lnum2;
		if (fnum2 + lnum2 > 9999999999)
		{
			new += 1;
			new2 %= 10000000000;
		}
		printf(", %lu%lu", new, new2);
		fnum1 = lnum1;
		fnum2 = lnum2;
		lnum1 = new;
		lnum2 = new2;
	}
	printf("\n");
	return (0);
}
