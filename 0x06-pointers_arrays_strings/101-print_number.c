#include "main.h"

/**
 * print_number - prints an integer using _putchar.
 * @n: integer.
 */
void print_number(int n)
{
	int i = n, div = 0;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	while (i / 10)
	{
		div *= 10;
		i /= 10;
	}

	while (div != 1)
	{
		i = n / div;
		_putchar((i % 10) + '0');
		div /= 10;
	}
}
