#include "main.h"
/**
 * print_alphabet - print lowercase alphabet using _putchar.
 *
 * Return: 0
 */
void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		_putchar(alpha);
		alpha++;
	}
}
