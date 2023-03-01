#include "main.h"

/**
 * cap_string - capitalize all words in a string.
 * @c: pointer to string.
 *
 * Return: pointer to string;
 */
char *cap_string(char *c)
{
	char *str = c;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			if (*(str - 1) == ' ')
			{
				*str -= 32;
			}
		}
		str++;
	}
	return (c);
}
