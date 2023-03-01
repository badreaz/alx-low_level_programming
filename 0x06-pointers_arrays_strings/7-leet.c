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
			*str = "4";
		else if (*str == 'e' || *str == 'E')
			*str = "3";
		else if (*str == 'o' || *str == 'O')
			*str = "0";
		else if (*str == 't' || *str == 'T')
			*str = "7";
		else if (*str == 'l' || *str == 'L')
			*str = "1";
		str++;
	}
	return (c);
}
