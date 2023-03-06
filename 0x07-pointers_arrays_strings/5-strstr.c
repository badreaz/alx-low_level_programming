#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: pointer to string.
 * @needle: pointer to substring.
 *
 * Reurn: pointer to the beginning of located
 * substring, or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	char c;
	char *new = needle;
	int i, num, str, first;

	i = 0;
	while (haystack[i] != '\0')
	{
		c = haystack[i];
		if (c != *needle)
		{
			i++;
			str = 0;
			needle = new;
			first = 0;
		}
		else if (first == 0)
		{
			num = i;
			first = 1;
			i++;
			str = 1;
			needle++;
		}
		else if (str == 1)
		{

			i++;
			needle++;
		}
	}
	if (str == 0)
		return (0);

	return (haystack + num);
}
