#include "main.h"

/**
 * string_toupper - uppercase all letters in a string.
 * @c: pointer to string.
 *
 * Return: pointer to the string.
 */
char *string_toupper(char *c)
{
	char *str = c;

	while (str != 0)
	{
		if (*str > 96 && *str < 123)
			*str -= 32;
		str++;
	}
	return (c);
}
