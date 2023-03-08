#include "main.h"

/**
 * wildcmp - compares two strings.
 * @s1: pointer to string.
 * @s2: pointer to string.
 *
 * Return: 1 if identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' || *s2 == '\0')
		return (0);
	return (1);
}
