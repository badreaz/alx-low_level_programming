#include "main.h"

/**
 *_pow - multiply p by itself until find match to n.
 * @p: number to square.
 * @n: squared number.
 *
 * Return: p if number is natura square, otherwise -1.
 */
int _pow(int p, int n)
{
	if ((p * p) == n)
	{
		return (p);
	}
	else if ((p * p) > n)
	{
		return (-1);
	}

	return (_pow(p + 1, n));
}

/**
 * _sqrt_recursion - square root natural number.
 * @n: number.
 *
 * Return: square root of n.
 */
int _sqrt_recursion(int n)
{
	return (_pow(1, n));
}
