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
	int sum1 = 0, sum2 = 0;

	while (s1 != 0)
	{
		sum1 += *s1;
		s1++;
	}
	while (s2 != 0)
	{
		sum2 += *s2;
		s2++;
	}
	return (sum1 - sum2);
}
