#include "main.h"

/**
 * _strncpy - copy 'n' byte of a string.
 * @dest: pointer to string.
 * @src: pointer to string.
 * @n: int for nummber of byte.
 *
 * Return: dest pointer.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *cpy = dest;
	int i = 0;

	while (i < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	if (i < n - 1)
		*dest = '\0';

	while (i < n)
	{
		*dest = 0;
		dest++;
		i++;
	}

	return (cpy);
}
