#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: pointer to string.
 * @needle: pointer to substring.
 *
 * Return: pointer to the beginning of located
 * substring, or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	char *n;
	char *c;

	while (*haystack != '\0')
	{
		c = haystack;
		n = needle;
		while (*haystack == *n && *n != '\0')
		{
			haystack++;
			n++;
		}
		if (*n == '\0')
			return (c);
		haystack++;
	}
	return (0);
}
