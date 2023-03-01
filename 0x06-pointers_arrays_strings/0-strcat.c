#include "maiin.h"

/**
 * _strcat - concatenate two strings.
 * @dest: pointer to string.
 * @src: pointer to string.
 *
 * Return: pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	char *cat = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (cat);
}
