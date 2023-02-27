#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: pointer to a string.
 *
 * Return: integer.
 */
int _atoi(char *s)
{
	int n = 0, count = 0;
	int *num;

	while (*s != '\0')
	{
		if (*s == '-')
			n++;
		else if (*s > 47 && *s < 58)
		{
			while (*s != '\0' && *s > 47 && *s < 58)
			{
				if (num == 0)
					*num = *s - 48;
				else
				{
					*num *= 10;
					*num += *s - 48;
				}
				if (count > 6)
				{
					num++;
					*num = 0;
					count = 0;
				}
				s++;
				count++;
			}
			if (n % 2 != 0)
				num *= -1;

			return (num);
		}
		s++;
	}
	return (num);
}
