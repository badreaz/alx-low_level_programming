#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to string.
 * @b: constant byte.
 * @n:number of bytes to fill.
 *
 * Return: pointer s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *str = s;

	while (i < n)
	{
		*str = b;
		str++;
		i++;
	}
	return (s);
}
