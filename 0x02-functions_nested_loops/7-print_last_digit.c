#include "main.h"
/**
 * print_lat_digit - print the last digit of a number.
 * @n: number to print last digit of.
 *
 * Return: the last digit of n.
 */
int print_last_digit(int n)
{
	n = n % 10;
	return (n + (n * 10) + '0');
}
