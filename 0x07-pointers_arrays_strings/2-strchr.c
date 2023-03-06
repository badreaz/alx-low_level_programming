#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: pointer to string.
 * @c: character to found.
 *
 * Return: pointer to first occurence of c, or NULL.
 */
char *_strchr(char *s, char c)
{
	char *ret;

	if (s == o)
		return (0);

	while (*s != '\0')
	{
		if (*s == c)
		{
			ret = s;
			return (ret);
		}
		s++;
	}
	return (0);
}
