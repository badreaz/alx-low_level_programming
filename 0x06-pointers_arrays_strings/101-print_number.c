#include "main.h"

/**
 * print_number - prints an integer using _putchar.
 * @n: integer.
 */
void print_number(int n)
{
	int i, div = 1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	i = n;
	while (i / 10)
	{
		div *= 10;
		i /= 10;
	}

	while (div != 0)
	{
		i = n / div;
		_putchar((i % 10) + '0');
		div /= 10;
	}
}
