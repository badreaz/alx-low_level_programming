#include "main.h"

/**
 * _sqrt_recursion - square root natural number.
 * @n: number.
 *
 * Return: square root of n.
 */
int _sqrt_recursion(int n)
{
	int sqrt;

	if (n < 1)
		return (-1);
	else if (n == 1)
		return (1);

	sqrt = _sqrt_recursion(n / 2) + 1;

	return (sqrt);
}
