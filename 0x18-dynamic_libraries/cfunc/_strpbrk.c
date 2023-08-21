#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes.
 * @s: pointer to string.
 * @accept: pointer to bytes.
 *
 * Return: the first occurence of a byte to s, or NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	char c;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			c = accept[i];
			if (*s == c)
			{
				return (s);
			}
		}
		s++;
	}
	return (0);
}