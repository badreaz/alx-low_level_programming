#include "main.h"

/**
 * string_nconcat - concatenates two strings.
 * @s1: pointer to string.
 * @s2: pointer to string.
 * @n: number of bytes;
 *
 * Return: pointer to memory holding the concatenated str.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len = 0, i = 0;

	while (s1[len] != 0)
		len++;
	p = malloc(sizeof(char) * len * n);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	while (i <= len)
	{
		p[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < n && s2[i] != 0)
	{
		p[i + len] = s2[i];
		i++;
	}
	p[i + len] = '\0';
	return (p);
}
