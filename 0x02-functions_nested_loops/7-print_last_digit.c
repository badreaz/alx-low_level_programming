#include "main.h"
/**
 * print_last_digit - print the last digit of a number.
 * @n: number to print last digit of.
 *
 * Return: the last digit of n.
 */
int print_last_digit(int n)
{
	if (n < 0)
		n = 0 - n;
	n = n % 10;
	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}
