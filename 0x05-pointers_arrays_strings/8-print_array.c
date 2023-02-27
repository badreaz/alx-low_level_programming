#include "main.h"

/**
 * print_array - prints 'n' elements of any array of integers.
 * @a: pointer of array of int.
 * @n: integer.
 */
void print_array(int *a, int n)
{
	int count = 0;

	while (count < n && a != NULL)
	{
		_putchar(*a + '0');
		count++;
		a++;
	}
	_putchar('\n');
}
