#include "main.h"

/**
 * cap_string - capitalize all words in a string.
 * @c: pointer to string.
 *
 * Return: pointer to string;
 */
char *cap_string(char *c)
{
	int i;
	char *str = c;
	int sep_word[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*str >= 'a' && *str <= 'z')
		*str -= 32;

	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
		{
			for (i = 0; i < 13; i++)
			{
				if (*(str - 1) == sep_word[i])
				{
					*str -= 32;
					break;
				}
			}
		}
		str++;
	}
	return (c);
}
