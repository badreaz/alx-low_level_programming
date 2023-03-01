#include "main.h"

/**
 * leet - encodes a string to 1337.
 * @c: pointer to string.
 *
 * Return: pointerr to string.
 */
char *leet(char *c)
{
	char *str = c;

	while (*str != '\0')
	{
		if (*str == 'a' || *str == 'A')
			*str = 52;
		else if (*str == 'e' || *str == 'E')
			*str = 51;
		else if (*str == 'o' || *str == 'O')
			*str = 48;
		else if (*str == 't' || *str == 'T')
			*str = 55;
		else if (*str == 'l' || *str == 'L')
			*str = 49;
		str++;
	}
	return (c);
}
