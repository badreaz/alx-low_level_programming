#include <stdio.h>

/**
 * main - print the sum of all multiples of 3 under 1024.
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int num;
	int sum;

	sum = 0;
	num = 1;
	for (i = 0; i < 1024; i = 3 * num)
	{
		sum += i;
		num++;
	}
	num = 1;
	for (i = 0; i < 1024; i = 5 * num)
	{
		sum += i;
		num++;
	}
	printf("%d", sum);
	return (0);
}
