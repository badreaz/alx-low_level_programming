#include "main.h"

/**
 * _puts - prints a string.
 * @str: pointer to string.
 */
void _puts(char *str)
{
	char *new;

	while (*new != '\0')
	{
		_putchar(*new);
		new++;
	}
	_putchar('\n');
}
