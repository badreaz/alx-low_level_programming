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
	int i;

	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	return (cpy);
}
