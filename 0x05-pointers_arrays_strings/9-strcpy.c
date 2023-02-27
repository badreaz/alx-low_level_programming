#include "main.h"

/**
 * _strcpy - copy string from src to dest.
 * @dest: buffer.
 * @src: pointer to a string.
 *
 * Return: pointer dest.
 */
char *_strcpy(char *dest, char *src)
{
	dest = src;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest);
}
