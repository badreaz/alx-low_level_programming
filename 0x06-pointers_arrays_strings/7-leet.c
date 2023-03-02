#include "main.h"

/**
 * leet - encodes a string to 1337.
 * @c: pointer to string.
 *
 * Return: pointerr to string.
 */
char *leet(char *c)
{
	char *str = c;
	int i;
	int lower[] = {97, 101, 111, 116, 108};
	int upper[] = {65, 69, 79, 84, 76};
	int num[] = {52, 51, 48, 55, 49};

	while (*str != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == lower[i] || *str == upper[i])
			{
				*str = num[i];
				break;
			}
		}
		str++;
	}
	return (c);
}
