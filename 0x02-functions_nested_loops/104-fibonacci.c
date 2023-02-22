#include "main.h"

void print(unsigned long int);

/**
 * main - prints the first 98 fibonacci number.
 *
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long int fnum;
	unsigned long int lnum;
	unsigned long int new;

	for (i = 1; i < 98; i++)
	{
		if (i == 1)
		{
			_putchar('1');
			_putchar(',');
			_putchar(' ');
			_putchar('2');
			fnum = 1;
			lnum = 2;
		}
		else
		{
			_putchar(',');
			_putchar(' ');
			new = fnum + lnum;
			print(new);
			fnum = lnum;
			lnum = new;
		}
	}
	_putchar('\n');

	return (0);
}

/**
 * print - print long number using putchar
 */
void print(unsigned long int new)
{
	if (new / 10)
		print(new / 10);

	_putchar('0' + (new % 10));
}
