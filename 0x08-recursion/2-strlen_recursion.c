#include "main.h"

/**
 * _strlen_recursion - find the length of a string.
 * @s: pointer to string.
 *
 * Return: string length.
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (0);
	}
	len = _strlen_recursion(s + 1) + 1;

	return (len);
}
