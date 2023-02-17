#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - select a random number then print the last digit of it.
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int ldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ldigit = n % 10;
	printf("Last digit of %d is %d ", n, ldigit);
	if (ldigit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (ldigit == 0)
	{
		printf("and is 0\n");
	}
	else if (ldigit < 6)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
