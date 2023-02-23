#include "main.h"
#include <stdio.h>

/**
 * main - print numbers from 0 to 100.
 * Description: replace multiple by 3 or 5 to 
 * Fizz Buzz respectively and FizzBuzz if both.
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf(" FizzBuzz");
		else if (i % 3 == 0)
			printf(" Fizz");
		else if (i % 5 == 0)
			printf(" Buzz");
		else if (i == 1)
			printf("1");
		else
			printf(" %d", i);
	}
	printf("\n");

	return (0);
}
