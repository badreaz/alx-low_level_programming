#include "main.h"

/**
 * rot13 - encodes a string using rot-13.
 * @c: pointer to string.
 *
 * Return: pointer to string.
 */
char *rot13(char *c)
{
	char *str = c;
	int i;
	char *rot_13 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *out_13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (*str != '\0')
	{
		for (i = 0; i < 52; i++)
		{
			if (*str == rot_13[i])
			{
				*str = out_13[i];
				break;
			}
		}
		str++;
	}
	return (c);
}
