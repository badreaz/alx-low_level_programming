#include "main.h"

/**
 * print_number - print numbers using _putchar.
 * @n: number.
 */
void print_number(int n)
{
	if (n > 0)
	{
		_putchar('-');
		n = 0 - n;
	}
	if (n / 10)
		print_number(n / 10);

	_putchar((n % 10) + '0');
}
