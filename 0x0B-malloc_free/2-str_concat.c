#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: pointer to string.
 * @s2: pinter to string.
 *
 * Return: pointer to allocated memory, or NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *cat;
	int size1 = 0, i = 1, size2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*s1 != '\0')
	{
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		s2++;
		i++;
	}
	cat = malloc(sizeof(char) * i);
	if (cat == NULL)
		return (NULL);
	i = 0;
	while (s1[size1] != '\0' || s2[size2] != '\0')
	{
		if (s1[size1] != '\0')
		{
			cat[i] = s1[size1];
			size1++;
		}
		else
		{
			cat[i] = s2[size2];
			size2++;
		}
		i++;
	}
	cat[i] = '\0';
	return (cat);
}
