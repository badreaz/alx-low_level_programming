#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: pointer to a string.
 *
 * Return: integer.
 */
int _atoi(char *s)
{
	int n = 0, count = 0, m = 0;
	int times = 1, num = 0, i = 0;
	char *new = s;

	while (*s != '\0')
	{
		if (*s > 47 && *s < 58)
		{
			count++;
			if (!(*(s + 1) > 47 && *(s + 1) < 58))
				break;
		}
		s++;
		n++;
	}
	for (; count > 1; count--)
		times *= 10;

	while (i <= n)
	{
		if (*new == '-')
			m *= -1;

		else if (*new > 47 && *new < 58)
		{
			num += (*new + '0') * times * m;
			times /= 10;
		}
		new++;
		i++;
	}
	return (num);
}
