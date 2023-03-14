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
	int size = 0, i = 0, j = 0, num = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	size = i + j + 1;
	cat = malloc(sizeof(char) * size);
	if (cat == NULL)
		return (NULL);

	while (num < (size - 1))
	{
		if (num < i)
		{
			cat[num] = s1[num];
		}
		else
		{
			cat[num] = s2[num - i];
		}
		num++;
	}
	cat[num] = '\0';
	return (cat);
}
