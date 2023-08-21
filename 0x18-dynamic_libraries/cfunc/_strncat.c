#include "main.h"

/**
 * _strncat - conatenate 'n' byte to another string.
 * @dest: pointer to string.
 * @src: pointer to string.
 * @n: int repesents number of byte.
 *
 * Return: pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *cat = dest;
	int i = 0;

	while (*dest != '\0')
		dest++;

	while (i < n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	return (cat);
}