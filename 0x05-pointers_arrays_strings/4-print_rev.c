#include "main.h"

/**
 * print_rev - prints a srting in reverse.
 * @s: pointer to char.
 */
void print_rev(char *s)
{
	int count = 0, n = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	while (n <= count)
	{
		s--;
		_putchar(*s);
		n++;
	}
	_putchar('\n');
}
