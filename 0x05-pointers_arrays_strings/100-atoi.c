#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: pointer to a string.
 *
 * Return: integer.
 */
int _atoi(char *s)
{
	long int num = 0, n = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			n++;
		else if (*s > 47 && *s < 58)
		{
			while (*s != '\0' && *s > 47 && *s < 58)
			{
				if (num == 0)
					num = *s - 48;
				else
				{
					num *= 10;
					num += *s - 48;
				}
				s++;
			}
			if (n % 2 != 0)
				num *= -1;

			return (num);
		}
		s++;
	}
	return (num);
}
