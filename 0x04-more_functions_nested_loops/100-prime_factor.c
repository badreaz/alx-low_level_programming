#include <stdio.h>

/**
 * main - prints the largest prime factor.
 * 
 * Return: 0
 */
int main(void)
{
	int largest, i;
	long int num = 612852475143;

	for (i = 2; i <= num, i++)
	{
		if (num % i == 0)
		{
		num = num / i;
			largest = i;
		}
	}

	printf("%d", largest);

	return (0);
}
