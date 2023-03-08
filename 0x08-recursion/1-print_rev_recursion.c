#include "main.h"

/**
 * _print_rev_recursion - prints string in revers using recursion.
 * @s: pointer to string.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*(s - 1));
	}
}
