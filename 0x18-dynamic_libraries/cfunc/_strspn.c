#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: pointer to string.
 * @accept: pointer to segment.
 *
 * Return: the number of byte in initial segment of s that consists only
 * from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, j, sum = 0, mark = 0;
	char c;

	x = 0;
	while (accept[x] != '\0')
	{
		x++;
	}

	while (*s != '\0')
	{
		for (j = 0; j < x; j++)
		{
			c = accept[j];
			if (*s == c)
			{
				sum++;
				mark = 1;
			}
		}
		if (mark == 0)
			return (sum);
		mark = 0;
		s++;
	}
	return (sum);
}