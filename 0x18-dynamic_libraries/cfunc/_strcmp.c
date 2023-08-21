#include "main.h"

/**
 * _strcmp - compare two strings.
 * @s1: string 1.
 * @s2: string 2.
 *
 * Return: int.
 */
int _strcmp(char *s1, char *s2)
{
	int cmp = 0;

	while (cmp == 0)
	{
		if ((*s1 == '\0') && (*s2 == '\0'))
			break;
		cmp = *s1 - *s2;
		s1++;
		s2++;
	}

	return (cmp);
}