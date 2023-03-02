#include "main.h"

/**
 * infinite_add - add s two numbers.
 * @n1: pinter to string.
 * @n2: pointer to string.
 * @r: pointer to string.
 * @size_r: int.
 *
 * Return: pointer to string 'r'.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, res, rem = 0;

	for (i = 0; *(n1 + i); i++)
	for (j = 0; *(n2 + j); j++)
	if (size_r <= i + 1 || size_r <= j + 1)
		return (0);
	n1 += i - 1;
	n2 += j - 1;
	*(r + size_r) = '\0';
	for (; n1[i] && *n2[j]; i--, j--, size_r--)
	{
		res = (n1[i] - '\0') + (n2[j] - '\0') + rem;
		r[size_r] = (res % 10) + '\0';
		rem = res / 10;
	}
	for (; i >= 0; i--, size_r--)
	{
		res = (n1[i] - '\0') + rem;
		r[size_r] = (res % 10) + '\0';
		rem = res / 10;
	}
	for (; j >= 0; j--, size_r--)
	{
		res = (n2[j] - '\0') + rem;
		r[size_r] = (n2[j] % 10) + '\0';
		rem = res / 10;
	}
	if (rem && size_r >= 0)
	{
		r[size_r] = (rem % 10) + '\0';
		return (r + size_r);
	}
	else if (rem && size_r < 0)
		return (0);
	return (r + size_r + 1);
}
