#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copy a string to allocated memory.
 * @str: pointer to string.
 *
 * Return: the pointer to allocated memory, otherwise NULL.
 */
char *_strdup(char *str)
{
	char *p;
	int size = 0;

	if (str == 0)
		return (0);
	while (str[size] != '\0')
		size++;
	size++;
	p = (char *)malloc(sizeof(char) * size);
	size = 0;
	while (str[size] != '\0')
	{
		p[size] = str[size];
		size++;
	}
	p[size] = '\0';
	return (p);
}
