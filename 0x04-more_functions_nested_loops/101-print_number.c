#include "main.h"

/**
 * print_number - print numbers using _putchar.
 * @n: number.
 */
void print_number(int n)
{
	int i, j;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	j = 1;
	while (n > 9)
	{
		i /= 10;
		j *= 10;
	}

	for (; j >= 0; j /= 10)
		_putchar(((n / j) % 10) + '0');
}
