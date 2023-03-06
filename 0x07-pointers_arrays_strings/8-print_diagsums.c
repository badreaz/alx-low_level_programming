#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a
 * square matrix of integer.
 * @a: pointer to square matrix.
 * @size: size of pointer.
 */
void print_diagsums(int *a, int size)
{
	int i, n, sum;

	i = 0;
	n = size + 1;
	sum = 0;
	while (i < size)
	{
		sum += a[n * i];
		i++;
	}
	printf("%d, ", sum);

	i = 1;
	n = size - 1;
	sum = 0;
	while (i <= size)
	{
		sum += a[n * i];
		i++;
	}
	printf("%d\n", sum);
}
