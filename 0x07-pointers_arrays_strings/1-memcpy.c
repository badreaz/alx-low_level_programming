#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: pointer to copy to.
 * @src: pointer to copy from.
 * @n: number of byte.
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ret = dest;
	unsigned int i = 0;

	while (i < n)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}

	return (ret);
}
