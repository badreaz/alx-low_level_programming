#include <stdio.h>

/**
 * main - print all combinations of single number seperatedd with ','.
 *
 * Return: 0
 */
int main(void)
{
	int comb;

	comb = 48;
	while (comb <= '9')
	{
		putchar(comb);
		if (comb < '9')
		{
			putchar(',');
			putchar(' ');
		}
		comb++;
	}
	putchar('\n');
	return (0);
}
