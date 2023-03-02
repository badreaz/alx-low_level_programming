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

	for (i = 0; *(n1 + i) != '\0'; i++)
	for (j = 0; *(n2 + j) != '\0'; j++)
	if (size_r <= i + 2 || size_r <= j + 2)
		return (0);
	n1 += i - 1;
	n2 += j - 1;
	*(r + size_r) = '\0';
	size_r--;
	for (; *n1 && *n2; n1--, n2--, size_r--)
	{
		res = (*n1 - '0') + (*n2 - '0') + rem;
		r[size_r] = (res % 10) + '0';
		rem = res / 10;
	}
	for (; *n1; n1--, size_r--)
	{
		res = (*n1 - '0') + rem;
		r[size_r] = (res % 10) + '0';
		rem = res / 10;
	}
	for (; *n2; n2--, size_r--)
	{
		res = (*n1 - '0') + rem;
		r[size_r] = (res % 10) + '0';
		rem = res / 10;
	}
	if (rem && size_r >= 0)
	{
		r[size_r] = (rem % 10) + '0';
		return (r + size_r);
	}
	else if (rem && size_r < 0)
		return (0);
	return (r + size_r + 1);
}
