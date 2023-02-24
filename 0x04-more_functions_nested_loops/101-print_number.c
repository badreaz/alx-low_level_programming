#include "main.h"

/**
 * print_number - print numbers using _putchar.
 * @n: number.
 */
void print_number(int n)
{
	unsigned int num = n;
	int i, j;

	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}

	i = num;
	j = 1;
	while (i > 9)
	{
		i /= 10;
		j *= 10;
	}
	while (j >= 1)
	{
		_putchar((num / j) % 10 + '0');
		j /= 10;
	}
}
