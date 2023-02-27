#include "main.h"

/**
 * rev_string - reverse a string.
 * @s: pointer to string.
 */
void rev_string(char *s)
{
	char tmp;
	int count = 0, n = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	while (n <= count / 2)
	{
		tmp = s[n];
		s[n] = s[count - n];
		s[count - n] = tmp;
		n++;
	}
	s[n] = '\0';
}
