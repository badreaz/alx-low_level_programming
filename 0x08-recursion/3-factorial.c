#include "main.h"

/**
 * factorial - print the factorial of given number.
 * @n: number.
 *
 * Return: factorial.
 */
int factorial(int n)
{
	int f = 0;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	f = factorial(n - 1) * n;

	return (f);
}
