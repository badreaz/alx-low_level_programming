#include "main.h"
void printnum(int, int, int);
/**
 * print_times_table - print the n times table.
 * @n: number of times table.
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n >= 0 && n < 15)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				printnum(i, j, n);
				/*
				* result = i * j;
				* if (j == 0)
				*{
				*	_putchar('0');
				*}
				*else if (result < 10)
				*{
				*	_putchar(' ');
				*	_putchar(' ');
				*	_putchar(' ');
				*	_putchar(result + '0');
				*}
				*else if (result < 100)
				*{
				*	_putchar(' ');
				*	_putchar(' ');
				*	_putchar(((result / 10)  % 10) + '0');
				*	_putchar((result % 10) + '0');
				*}
				*else if (result < 1000)
				*{
				*	_putchar(' ');
				*	_putchar(((result / 100) % 10) + '0');
				*	_putchar(((result / 10) % 10) + '0');
				*	_putchar((result % 10) + '0');
				*}
				*if (j < n)
				*	_putchar(',');
				*/
			}
			_putchar('\n');
		}
	}
}
/**
 * printnum - print times teable template
 * @i: i
 * @j: j
 * @n: n
 */
void printnum(int i, int j, int n)
{
	int result;

	result = i * j;
	if (j == 0)
		_putchar('0');
	else if (result < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar((result % 10) + '0');
	}
	else if (result < 100)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(((result / 10) % 10) + '0');
		_putchar((result % 10) + '0');
	}
	else if (result < 1000)
	{
		_putchar(' ');
		_putchar(((result / 100) % 10) + '0');
		_putchar(((result / 10) % 10) + '0');
		_putchar((result % 10) + '0');
	}
	if (j < n)
		_putchar(',');
}
