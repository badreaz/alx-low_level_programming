#include <stdio.h>

/**
 * main - prints the largest prime factor.
 *
 * Return: 0
 */
int main(void)
{
	int i;
	long int num = 612852475143;

	for (i = 3; i < 12057; i += 2)
	{
		if ((num % i == 0) && num != i)
		{
			num = num / i;
		}
	}

	printf("%ld\n", num);

	return (0);
}
