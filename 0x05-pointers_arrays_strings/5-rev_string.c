#include "main.h"

/**
 * rev_string - reverse a string.
 * @s: pointer to string.
 */
void rev_string(char *s)
{
	char *str = s;
	char tmp;
	int count = 0, n = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	while (n <= count / 2)
	{
		tmp = *str;
		*str = *s;
		*s = tmp;
		str++;
		s--;
		n++;
	}
	*str = '\0';
}
