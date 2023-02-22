#include <stdio.h>

/**
 * main - prints even numbers of fibonacci numbers.
 *
 * Return: 0
 */
int main(void)
{
	long int i;
	unsigned long int fnum;
	unsigned long int lnum;
	unsigned long int new;
	unsigned long int sum;

	for (i = 1; i < 4000000; i++)
	{
		if (i == 1)
		{
			sum = 2;
			fnum = 1;
			lnum = 2;
		}
		else
		{
			new = fnum + lnum;
			if (new % 2 == 0)
			{
				sum += new;
			}
			fnum = lnum;
			lnum = new;
		}
	}
	printf("\n");

	return (0);
}
