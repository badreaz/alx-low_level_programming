#include "main.h"

/**
 * _len - length of string.
 * @s: pointer to string.
 *
 * Return: length.
 */
int _len(char *s)
{
	if (*s)
		return (_len(s) + 1);
	return (0);
}

/**
 * recursion - recurse through the string.
 * @s: pointer to string.
 * @len: length of string.
 * @i: number of recurse went through.
 *
 * Return: 1 if string is palindrome, otherwise 0.
 */
int recursion(char *s, int len, int i)
{
	if (i >= len)
		return (1);
	if (s[len] == s[i])
		return (recursion(s, len - 1, i + 1));
	return (0);
}

/**
 * is_palindrome - check if a string is plaindrome.
 * @s: pointer to string.
 *
 * Return: 1 if true, 0 if false.
 */
int is_palindrome(char *s)
{
	int len = _len(s);

	return (recursion(s, (len - 1), 0));
}
