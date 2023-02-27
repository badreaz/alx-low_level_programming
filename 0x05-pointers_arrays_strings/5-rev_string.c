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
	if (count % 2 == 0)
		count = count / 2;
	else
		count = (count - 1) / 2;

	while (n < count)
	{
		s--;
		tmp = *str;
		*str = *s;
		*s = tmp;
		str++;
		n++;
	}
}
