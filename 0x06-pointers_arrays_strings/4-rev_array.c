#include "main.h"

/**
 * reverse_array - reverse an array of integer.
 * @a: pointer to integer.
 * @n: number of element.
 */
void reverse_array(int *a, int n)
{
	int i, tmp = 0;

	n -= 1;
	for (i = 0; i < (n / 2); i++)
	{
		tmp = a[i];
		a[i] = a[n - i];
		a[n - i] = tmp;
	}
}
