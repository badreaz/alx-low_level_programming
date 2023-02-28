#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: pointer to a string.
 *
 * Return: integer.
 */
int _atoi(char *s)
{
	int  m = 1,  num = 0, i = 0;

	while ((s[i] < 58 || s[i] > 57) && s[i] != '\0')
	{
		if (s[i] == '-')
			m *= -1;
		i++;
	}
	while ((s[i] > 47 && s[i] < 58) && s[i] != '\0')
	{
		if (num >= 0)
		{
			num = num * 10 - (s[i] - '0');
			i++;
		}
		else
		{
			num = num * 10 - (s[i] - '0');
			i++;
		}
	}
	m *= -1;

	num *= m;
	return (num);
}
