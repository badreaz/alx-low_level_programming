#include "main.h"

/**
 * _atoi - convert a string to an integer.
 * @s: pointer to a string.
 *
 * Return: integer.
 */
int _atoi(char *s)
{
	int count = 0, m = 0;
	int num = 0, i = 0;

	while (s[count] != '\0')
		count++;

	while (i < count)
	{
		if (s[i] == '-')
			m *= -1;
		else if (s[i] > 47 && s[i] < 58)
		{
			if (num == 0)
				num = s[i] + '0';
			else
			{
				num *= 10;
				num += s[i] + '0';
			}
			if (!(s[i + 1] > 47 && s[i + 1] < 58))
				break;
		}
		i++;
	}
	num *= m;
	return (num);
}
