#include "main.h"

/**
 * _strlen - return the length of a string.
 * @s: pointer to char.
 *
 * Return: the length of string.
 */
int _strlen(char *s)
{
	char *p = s;
	int count;

	while (*p != '\0')
	{
		count++;
		p++;
	}
	return (count);
}
