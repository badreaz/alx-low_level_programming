#include "main.h"

/**
 * is_palindrome - check if a string is plaindrome.
 * @s: pointer to string.
 *
 * Return: 1 if true, 0 if false.
 */
int is_palindrome(char *s)
{
	char *rev = s;

	if (s == 0)
		return (1);

	while (*rev != '\0')
	{
		rev++;
	}

	while (*s != '\0')
	{
		rev--;
		if (*s != *rev)
		{
			return (0);
		}
		s++;
	}
	return (1);
}
