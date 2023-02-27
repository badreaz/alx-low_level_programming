#include "main.h"
#include <stdio.h>

/**
 * print_array - prints 'n' elements of any array of integers.
 * @a: pointer of array of int.
 * @n: integer.
 */
void print_array(int *a, int n)
{
	int count = 1;

	if (n <= 0)
		count = 0;

	while (count < n)
	{
		if (count == 1)
			printf("%d", *a);
		a++;
		printf(", %d", *a);
		count++;
	}
	printf("\n");
}
